// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

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

class DatabaseManager
{
    public:
        DatabaseManager();
        ~DatabaseManager();
        bool insert_function (Student* );
        bool delete_function (int student_id);
        bool registering_to_Course(int, Grade);
        bool dropping_a_Course(int, std::string);
        virtual void print(int);
        virtual void print(std::string);

    private:
        static const int max_no_of_students = 5000;
        static const int no_of_offered_courses =400;
        int no_of_students_enrolled;
        Student* array_student[max_no_of_students];
        CourseRegistration * arrayCourse[no_of_offered_courses];
};

#endif // DATABASEMANAGER_H
