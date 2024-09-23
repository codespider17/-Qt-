#include "global.h"

QString removeSpace(QString str)
{
    QString ans="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
            ans+=str[i];
        else continue;
    }
    return ans;
}
QString dbusername="xujiaxing";
QString dbpassword="12345678";
QString dbHostName="XIAOSHOUBINGLIANG\\SQLEXPRESS";
QString userLogId;



bool isProperId(QString str)
{
    if(str.length() != 6)
        return false;
    else
    {
        QByteArray ba = str.toLatin1();//QString 转换为 char*
        const char *s = ba.data();
        while(*s && *s>='0' && *s<='9') s++;

        if (*s)
        { //不是纯数字
            return false;
        }
        else
        { //纯数字
            return true;
        }
    }
}

bool isProperPassword(QString str)
{
    //密码位数必须要大于等于6位，小于等于20位
    if(str.length()>=6 && str.length()<=20)
        return true;
    else return false;
}
