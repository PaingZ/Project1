#ifndef DATABASE_H
#define DATABASE_H
#include <QString>

class database
{
private:
    QString data;
public:
    database();
    const QString &getStr() const;
    void setStr(const QString &newStr);
};

#endif // DATABASE_H
