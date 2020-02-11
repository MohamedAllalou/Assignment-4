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

CourseSchedule::CourseSchedule()
{
    coursePrerequisite = " ";
    g_log.write("CourseSchedule Default Constructor called");
}

CourseSchedule::CourseSchedule(Course choice,std::string prereq,Time first,Time second)
{
    course = choice;
    coursePrerequisite = prereq;
    time1 = first;
    time2 = second;
    g_log.write("CourseSchedule Overloaded Constructor called");
}

CourseSchedule::~CourseSchedule()
{
    g_log.write("CourseSchedule Destructor called");
}

void CourseSchedule::print()
{
    cout << " Course Name: " << Getcourse()->GetcourseName() << '\t' << "Course Number: " << Getcourse()->GetcourseNumber() << endl;
    cout << " Course Prerequisite: " << GetcoursePrerequisite() << endl;
    cout << " First lecture: " << time1 << endl << ". Second lecture: " << time2 << endl;
    g_log.write("CourseSchedule Print function called");
}
