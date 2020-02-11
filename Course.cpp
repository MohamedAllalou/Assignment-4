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

extern Log g_log;

Course::Course()
{
    courseName = " ";
    courseNumber = " ";
    g_log.write("Course Default Constructor called");
}
Course::Course(std::string cname, std::string cnumber)
{
        courseNumber = cnumber;
        courseName = cname;
        g_log.write("Course Overloaded Constructor called");
}
Course::~Course()
{
    g_log.write("Course Destructor called");
}

void Course::print()
{
    cout << "Course Number: " << courseNumber << endl;
    cout << "Course Name: " << courseName << endl;
}
