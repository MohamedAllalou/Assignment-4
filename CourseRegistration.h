// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef COURSEREGISTRATION_H
#define COURSEREGISTRATION_H

#include "Log.h"
#include "Time.h"
#include "Course.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class CourseRegistration : public Course
{
    public:
        CourseRegistration();
        CourseRegistration(Course);
        virtual ~CourseRegistration();
        virtual void print();
        bool register_a_course( int student_id);
        bool dropping_a_course( int student_id);


        int Getno_of_registeredStudents() {return no_of_registeredStudents; g_log.write("Course Registration Getno_of_registeredStudents function called"); }
        void Setno_of_registeredStudents(int val) { no_of_registeredStudents = val; g_log.write("Course Registration Setno_of_registeredStudents function called"); }


    private:
        static const int classSize = 60;
        int registeredtoCourse[classSize];
        int no_of_registeredStudents;
};

#endif // COURSEREGISTRATION_H
