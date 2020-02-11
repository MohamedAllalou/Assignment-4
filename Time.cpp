// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#include "Log.h"
#include "Time.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

extern Log g_log;

std::ostream& operator << (std::ostream& o, Time& T)
{
    o << " Day = " << T.Day << ", Hour = " << T.Hour << endl;
    return o;
}

Time::Time()
{
    Hour = 0;
    Day = 0;
    g_log.write("Time default constructor called");
}

Time::Time(int h, int d)
{
    Hour =  h;
    Day = d;
    g_log.write("Time overloaded constructor called");
}

bool Time::operator==(Time& T1)
{
    bool equality;
    if ((this -> GetHour() == T1.GetHour()) && (this -> GetDay() == T1.GetDay())) {
            equality = true;
        }

    else if ((this -> GetHour() != T1.GetHour()) || (this -> GetDay() != T1.GetDay())) {
            equality = false;
        }

    else {g_log.write("Time overloaded operator == did not execute correctly");}
    return equality;
}

Time::~Time()
{
    g_log.write("Time destructor called");
}
