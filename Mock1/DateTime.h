#ifndef DATETIME_H_
#define DATETIME_H_
#include <ctime>
#include <iostream>
#include <iomanip>
#include <string>

class DateTime
{
private:
    std::time_t m_time;

public:
    DateTime();
    DateTime(int year, int month, int day, int hh, int min, int sec);
    std::string getTimeString();
    std::time_t getTimeEpoch();
};
#endif // !DATETIME_H_
