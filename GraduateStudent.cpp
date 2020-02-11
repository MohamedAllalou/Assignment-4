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

GraduateStudent::GraduateStudent()
{
    g_log.write("GraduateStudent default constructor called");
}

GraduateStudent::GraduateStudent(std::string s, int i):Student (s, i)
{
    g_log.write("GraduateStudent overloaded constructor called");
}

bool GraduateStudent::checking_a_course(std::string cnum)
{
    for ( int j=0; j < max_number_of_graduatecourses; j++) {
            if (studentRecord[j]->Getcourse().GetcourseNumber() == cnum) {
                return true;
            }
    }
    return false;
    g_log.write("GraduateStudent checking_a_course function called");
}

bool GraduateStudent::register_a_course(Grade* g)
{
    for ( int j=0; j < max_number_of_graduatecourses; j++)
    {
        if (studentRecord[j] != NULL) {
            studentRecord[j] = g;
            return true;
        }
    }
      return false;
      g_log.write("GraduateStudent register_a_course function called");
}

bool GraduateStudent::dropping_a_course(std::string cnum)
{
    for ( int j=0; j < max_number_of_graduatecourses; j++) {
            if (studentRecord[j]->Getcourse().GetcourseNumber() == cnum) {
                studentRecord[j] = NULL;
                return true;
            }
    }
    return false;
    g_log.write("GaduateStudent dropping_a_course function called");
}

GraduateStudent::~GraduateStudent()
{
    g_log.write("GraduateStudent destructor called");
}
