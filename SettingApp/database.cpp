#include "database.h"

const QString &database::getStr() const
{
    return data;
}

void database::setStr(const QString &newStr)
{
    data = newStr;
}

database::database()
{

}
