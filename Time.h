// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4


#ifndef TIME_H
#define TIME_H

#include "Log.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class Time
{
    public:
        Time();
        Time(int, int);
        virtual ~Time();

        bool operator == (Time&);
        friend std::ostream& operator << (std::ostream&, Time&);

        unsigned int GetHour() { return Hour; g_log.write("Time GetHour Function called"); }
        void SetHour(unsigned int val) { Hour = val; g_log.write("Time SetHour Function called"); }
        unsigned int GetDay() { return Day; g_log.write("Time GetDay Function called"); }
        void SetDay(unsigned int val) { Day = val; g_log.write("Time SetDay Function called"); }

    protected:

    private:
        unsigned int Hour;
        unsigned int Day;
};

#endif // TIME_H
