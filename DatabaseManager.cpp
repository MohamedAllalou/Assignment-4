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

DatabaseManager::DatabaseManager()
{
    g_log.write("DatabaseManager Default Constructor Called");
    int i;

    no_of_students_enrolled = 0;
    for (i = 0; i < max_no_of_students; i++){
        array_student[i] = NULL;
    }
    for (i = 0; i < no_of_offered_courses; i++) {
        arrayCourse[i] = NULL;
    }
}

bool DatabaseManager::insert_function(Student * s)
{
    g_log.write("DatabaseManager insert function called");
    for (int i = 0; i < max_no_of_students; i++){
        if (array_student[i] == NULL) {
            array_student[i] = s;}
            return true;
    }
    return false;
}

bool DatabaseManager::delete_function(int student_id)
{
    g_log.write("DatabaseManager delete function called");
    for (int i = 0; i < max_no_of_students; i++){
        if (array_student[i]->GetstudentID() == student_id) {
            delete array_student[i];
            array_student[i] = NULL;
        }
        return true;
    }
    return false;
}

bool DatabaseManager::registering_to_Course(int id, Grade g)
{
    g_log.write("DatabaseManager registering_to_course function called");

    for (int i = 0; i < no_of_offered_courses; i++) {
        if (arrayCourse[i]->GetcourseName() == g.Getcourse().GetcourseName()){
            return arrayCourse[i]->register_a_course( id );
        }
    }
    return false;
}

bool DatabaseManager::dropping_a_Course(int id, string s)
{
    g_log.write("DatabaseManager dropping_a_course function called");
    for (int i = 0; i < no_of_offered_courses; i++) {
        if (arrayCourse[i]->GetcourseNumber() == s) {
            return arrayCourse[i]->dropping_a_course( id );
        }
    }
    return false;
}

void DatabaseManager::print(int id)
{
    g_log.write("DatabaseManager print (%d) function called", id);

    for (int i = 0; i < max_no_of_students; i++){
        if (array_student[i]->GetstudentID() == id){
            array_student[i]->print();
        }
    }
}

void DatabaseManager::print(string s)
{
    for (int i = 0; i < no_of_offered_courses; i++) {
        if (arrayCourse[i]->GetcourseNumber() == s) {
            arrayCourse[i]->print();
        }
    }
    g_log.write("DatabaseManager print (course number) function called");
}

DatabaseManager::~DatabaseManager()
{
    g_log.write("DatabaseManager Destructor Called");
}
