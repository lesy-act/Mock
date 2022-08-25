#include"DateTime.h"
DateTime::DateTime()
{
    m_time = std::time(nullptr);
}
DateTime::DateTime(int year, int month, int day, int hh, int min, int sec)
{
    tm time_;
    time_.tm_year = year - 1900;
    time_.tm_mon = month - 1;
    time_.tm_mday = day;
    time_.tm_sec = sec;
    time_.tm_min = min;
    time_.tm_hour = hh;
    m_time = mktime(&time_);
}
std::string DateTime::getTimeString()
{
    return std::asctime(std::localtime(&m_time));
}
std::time_t DateTime::getTimeEpoch()
{
    return m_time;
}