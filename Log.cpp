// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#include "Log.h"
#include "Time.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "Grade.h"
#include "CourseRegistration.h"
#include "Student.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"
#include "DatabaseManager.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Log::Log()
{
    loglist.insert(loglist.begin(), "Log Begin");
}

Log::~Log()
{
    cout << "Logs Deleted" << endl;
}

/*void Log::write(std::string a)
{
    loglist.push_back(a);
}*/
#include <cstdarg>
#include <cstdio>
void Log::write(std::string fmt, ...)
{
    char buff[256];
    va_list args;
    va_start(args, fmt);
    int len = vsnprintf(buff, sizeof(buff), fmt.c_str(), args);
    va_end(args);

    std::string buffAsStdStr = buff;
    loglist.push_back(buffAsStdStr);
}

void Log::print()
{
    loglist.push_back("Log end");
    for (unsigned int i=0; i<loglist.size(); i++)
    {
        cout << endl << loglist[i];
    }

    loglist.pop_back();
    cout << endl;
}

void Log::clearall()
{
    loglist.clear();
    loglist.insert(loglist.begin(), "Log Begin");
}
