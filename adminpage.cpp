#include "adminpage.h"
#include "ui_adminpage.h"
#include<qsqlrecord.h>
adminPage::adminPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminPage)
{
    ui->setupUi(this);

    connect(ui->refresh,&QPushButton::clicked,this,&adminPage::on_refresh_clicked);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }
    QString tableName="a_"+userLogId;
    QSqlQuery query(db);
    QString queryString = QString("SELECT * FROM %1").arg(tableName);
    if (!query.exec(queryString)) {
        qDebug() << "查询失败:" << query.lastError().text();
        return;
    }
    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛类型","比赛名称", "时间", "地点", "主场", "价格","票数"}); // 根据实际列名设置

    // 填充表格
    int rowCount = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(rowCount);
        for (int column = 0; column < query.record().count(); ++column) {
            ui->tableWidget->setItem(rowCount, column, new QTableWidgetItem(query.value(column).toString()));
        }
        rowCount++;
    }

    // 自适应列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

adminPage::~adminPage()
{
    delete ui;
}

void adminPage::on_tologinPage_clicked()
{
    emit this->tologinPage();
}

void adminPage::on_saleBtn_clicked()
{
    addSports*addsports=new addSports;
    addsports->show();
    this->hide();
    connect(addsports,&addSports::toAdminPage,[=](){
        this->show();
        addsports->hide();
    });
}


void adminPage::on_refresh_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }
    QString tableName="a_"+userLogId;
    QSqlQuery query(db);
    QString queryString = QString("SELECT * FROM %1").arg(tableName);
    if (!query.exec(queryString)) {
        qDebug() << "查询失败:" << query.lastError().text();
        return;
    }
    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛类型","比赛名称", "时间", "地点", "主场", "价格","票数"}); // 根据实际列名设置

    // 填充表格
    int rowCount = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(rowCount);
        for (int column = 0; column < query.record().count(); ++column) {
            ui->tableWidget->setItem(rowCount, column, new QTableWidgetItem(query.value(column).toString()));
        }
        rowCount++;
    }

    // 自适应列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void adminPage::on_delBtn_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认框", "你确定要删除吗?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
    QString dbName = "client.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    bool isOpen = db.open();

    if (!isOpen) {
        QMessageBox::critical(this, "错误", "无法打开数据库: " + db.lastError().text());
        return;
    }
    QSqlQuery query(db);
    QString deltable="a_"+userLogId;

    int dangrow=ui->tableWidget->currentRow();
    int delnumber=ui->tableWidget->item(dangrow, 0)->text().toInt();
    QString usertable=ui->tableWidget->item(dangrow,1)->text();
    query.prepare(QString("DELETE FROM %1 WHERE id = :id").arg(deltable)); // 使用动态表名

    query.bindValue(":id", delnumber);

    if (!query.exec()) {
        qDebug() << "删除数据库记录失败:" << query.lastError().text();
    } else {
        qDebug() << "数据库记录删除成功";
    }
    QSqlQuery delUser(db);
    delUser.prepare(QString("DELETE FROM %1 WHERE id = :id").arg(usertable));
    delUser.bindValue(":id", delnumber);
    if (!delUser.exec()) {
        qDebug() << "删除USerTable数据库记录失败:" << delUser.lastError().text();
    } else {
        qDebug() << "UserTable数据库记录删除成功";
    }
    ui->tableWidget->removeRow(dangrow);
    QMessageBox::information(this,"提示","删除成功");
    }
}


void adminPage::on_cfmModify_clicked()
{
    // 获取选中的行
    QMessageBox::information(this, "提示", "如果你要更改比赛编号或比赛类型，那将让此次更改失败！");
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认框", "你确定要修改吗?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
    int currentRow = ui->tableWidget->currentRow();
    if (currentRow < 0) {
        QMessageBox::warning(this, "警告", "请先选择一行进行更新。");
        return;
    }

    // 获取选中行的所有数据
    QStringList rowData;
    for (int i = 0; i < ui->tableWidget->columnCount(); ++i) {
        QTableWidgetItem *item = ui->tableWidget->item(currentRow, i);
        if (item) {
            rowData << item->text();
        }
    }

    QString idnumber=rowData[0];
    QString sportstype = rowData[1]; // 第1列
    QString spname = rowData[2]; // 第2列
    QString sptime = rowData[3]; // 第3列
    QString spplace = rowData[4]; // 第4列
    QString sphost = rowData[5]; // 第5列
    QString spprice = rowData[6]; // 第6列
    QString spticket = rowData[7]; // 第7列

    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    QString tableName = "a_" + userLogId;
    QString usertableName=sportstype;
    // 假设第二列是唯一标识符
    QString identifier = idnumber; // 这里假设 idnumber 是您表中的唯一标识符

    // 创建更新查询，使用动态表名
    QSqlQuery query;
    QString updateQuery = QString("UPDATE %1 SET spname=:spname, sptime = :sptime, spplace = :spplace, sphost = :sphost, spprice = :spprice, spticket = :spticket WHERE id = :identifier").arg(tableName);
    query.prepare(updateQuery);
    // 绑定参数
    query.bindValue(":spname", spname);
    query.bindValue(":sptime", sptime);
    query.bindValue(":spplace", spplace);
    query.bindValue(":sphost", sphost);
    query.bindValue(":spprice", spprice);
    query.bindValue(":spticket", spticket);
    query.bindValue(":identifier", identifier); // 绑定标识符
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Update error: " << query.lastError().text();
    } else {
        QMessageBox::information(this, "成功", "修改总表成功！");
    }
    QSqlQuery usertable;
    QString updateUsertable= QString("UPDATE %1 SET spname=:spname, sptime = :sptime, spplace = :spplace, sphost = :sphost, spprice = :spprice, spticket = :spticket WHERE id = :identifier").arg(usertableName);
    usertable.prepare(updateUsertable);
    // 绑定参数
    usertable.bindValue(":spname", spname);
    usertable.bindValue(":sptime", sptime);
    usertable.bindValue(":spplace", spplace);
    usertable.bindValue(":sphost", sphost);
    usertable.bindValue(":spprice", spprice);
    usertable.bindValue(":spticket", spticket);
    usertable.bindValue(":identifier", identifier); // 绑定标识符
    // 执行查询
    if (!usertable.exec()) {
        qDebug() << "Update error: " << usertable.lastError().text();
    } else {
        qDebug()<<"修改用户界面成功！";
    }
    // QString ordername="t_"+userLogId;
    // QSqlQuery ordertable;
    // QString updateOrdertable= QString("UPDATE %1 SET spname=:spname, sptime = :sptime, spplace = :spplace, sphost = :sphost, spprice = :spprice WHERE id = :identifier").arg(ordername);
    // ordertable.prepare(updateOrdertable);
    // // 绑定参数
    // ordertable.bindValue(":spname", spname);
    // ordertable.bindValue(":sptime", sptime);
    // ordertable.bindValue(":spplace", spplace);
    // ordertable.bindValue(":sphost", sphost);
    // ordertable.bindValue(":spprice", spprice);
    // ordertable.bindValue(":identifier", identifier); // 绑定标识符
    // // 执行查询
    // if (!ordertable.exec()) {
    //     qDebug() << "订购表更新失败: " << ordertable.lastError().text();
    // } else {
    //     qDebug()<<"修改订单界面成功！";
    // }

    }
}

