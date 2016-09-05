#ifndef DATE_H
#define DATE_H

#include <ctime>
#include <string>
#include <sstream>
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    ~Date();
    void setNow();
    void setDay(int day);
    void setMonth(int);
    void setYear(int);
    void setDate(int, int, int);
    int getDay();
    int getMonth();
    int getYear();
    std::string getDateString(std::string );

};
#endif // DATE_H
