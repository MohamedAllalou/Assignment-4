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

Grade::Grade()
{
    grade = " ";
    g_log.write("Grade default constructor called");
}

Grade::Grade(Course a,std::string b)
{
    course = a;
    grade = b;
    g_log.write("Grade overloaded constructor called");
}

ostream& operator<<(ostream& test, Grade& grade1)
{
    test <<"Course: "<< grade1.course.GetcourseName() << endl << "Grade: " << grade1.Getgrade() << endl;
    return test;
}

Grade::~Grade()
{
    g_log.write("Grade destructor called");
}
