#include "Date.h"

Date::Date()
{
}

Date::~Date()
{
}

void Date::setNow()
{
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    day = now->tm_mday;
    month = now->tm_mon;
    year = now->tm_year;
}
void Date::setDay(int day)
{
    this->day = day;
}
void Date::setMonth(int)
{
    this->month = month;
}
void Date::setYear(int)
{
    this->year = year;
}
void Date::setDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year= year;
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getYear()
{
    return year;
}
std::string Date::getDateString(std::string separator)
{
    std::stringstream stream;
    std::string formatedDate;
    stream << day << separator << month << year;
    stream >> formatedDate;
    return formatedDate;
}