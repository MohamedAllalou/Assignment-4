// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "Student.h"
#include "GraduateStudent.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class GraduateStudent : public Student
{
    public:
        GraduateStudent ();
        GraduateStudent (std::string, int);
        ~GraduateStudent();
        virtual bool checking_a_course(std::string);
        virtual bool register_a_course(Grade*);
        virtual bool dropping_a_course(std::string);

    private:
        static const int max_number_of_graduatecourses = 12;
        Grade * studentRecord [max_number_of_graduatecourses];
};

#endif // GRADUATESTUDENT_H
