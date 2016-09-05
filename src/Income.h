#ifndef INCOME_H
#define INCOME_H

#include <string>
#include <ctime>
#include <src/Date.h>
class Income
{
private:
    float amount = 0;
    Date date;
public:
    Income();
    ~Income();
    Date getDate();
    std::string getFormatedDate(std::string separator)
    {
        return date.getDateString(separator);
    }
};


#endif // INCOME_H
