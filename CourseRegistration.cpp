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
#include <iomanip>

using namespace std;

extern Log g_log;

CourseRegistration::CourseRegistration()
{
    no_of_registeredStudents = 0;
    for(int i= 0; i<classSize;i++){registeredtoCourse[i] = 0;}
    g_log.write("CourseRegistration default constructor called");
}

CourseRegistration::CourseRegistration(Course name) // Call copy constructor for course object here
{
    no_of_registeredStudents = 0;
    for(int i= 0; i<classSize;i++){registeredtoCourse[i] = 0;}
    g_log.write("CourseRegistration overloaded constructor called");
}


bool CourseRegistration::register_a_course( int student_id)
{
    g_log.write("CourseRegistration register_a_course function called");

    for(int j=0;j<classSize;j++){
        if(registeredtoCourse[j] == student_id){
            cout << "Student " << student_id << " is already registered to this course" << endl;
            return false;
        }
    }
    for(int i=0;i<classSize;i++){
        if(registeredtoCourse[i] == 0){
            registeredtoCourse[i] = student_id;
            no_of_registeredStudents++;
            cout << "Student "<< student_id << " has been added." << endl;
            return true;
        }
    }

    cout << "Course is full" << endl;
    return false;
}

bool CourseRegistration::dropping_a_course( int student_id)
{
    for(int j=0;j<classSize;j++){
        if(registeredtoCourse[j] == student_id){
            no_of_registeredStudents--;
            for(int x = j; x<classSize;x++){
                    registeredtoCourse[x] = registeredtoCourse[x+1];
            registeredtoCourse[no_of_registeredStudents+1] = 0;
            }
            cout << "Student " << student_id << " has been unregistered" << endl;
            return true;
        }else if(registeredtoCourse[j] != 0 && registeredtoCourse[j] != student_id){
            cout << "Student " << student_id << " is not registered" << endl;
        }

    }
g_log.write("CourseRegistration dropping_a_course function called");
return false;
}

void CourseRegistration::print()
{
    cout << "Number of registered students: " << no_of_registeredStudents << endl;
    cout << "Students registered: " << endl;
        for(int i = 0; i<classSize/3;i++){
    cout <<registeredtoCourse[i] << setw(15) << registeredtoCourse[i+1] <<setw(25) <<registeredtoCourse[i+2] << endl;
        i = i+2;
    }
g_log.write("CourseRegistration print function called");
}


CourseRegistration::~CourseRegistration()
{
    g_log.write("CourseRegistration destructor called");
}
