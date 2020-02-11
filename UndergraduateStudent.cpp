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

UndergraduateStudent::UndergraduateStudent()
{
    g_log.write("UndergraduateStudent default constructor called");
}

UndergraduateStudent::UndergraduateStudent(std::string s, int i):Student (s, i)
{
    g_log.write("UndergraduateStudent overloaded constructor called");
}

bool UndergraduateStudent::checking_a_course(std::string cnum)
{
    for ( int j=0; j < max_no_of_courses; j++) {
            if (studentRecord[j]->Getcourse().GetcourseNumber() == cnum) {
                return true;
            }
    }
    return false;
    g_log.write("UndergraduateStudent checking_a_course function called");
}

bool UndergraduateStudent::register_a_course(Grade* g)
{
    for ( int j=0; j < max_no_of_courses; j++) {
        if (studentRecord[j] != NULL) {
            studentRecord[j] = g;
            return true;
        }
    }
      return false;
      g_log.write("UndergraduateStudent register_a_course function called");
}

bool UndergraduateStudent::dropping_a_course(std::string cnum )
{
    for ( int j=0; j < max_no_of_courses; j++) {
            if (studentRecord[j]->Getcourse().GetcourseNumber() == cnum) {
                studentRecord[j] = NULL;
                return true;
            }
    }
    return false;
    g_log.write("UndergraduateStudent dropping_a_course function called");
}

UndergraduateStudent::~UndergraduateStudent()
{
    g_log.write("UndergraduateStudent destructor called");
}
