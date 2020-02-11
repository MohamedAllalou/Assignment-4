// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef UNDERGRADUATESTUDENT_H
#define UNDERGRADUATESTUDENT_H

#include "Log.h"
#include "Time.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "Grade.h"
#include "CourseRegistration.h"
#include "Student.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class UndergraduateStudent : public Student
{
    public:
        UndergraduateStudent ();
        UndergraduateStudent (std::string, int);
        ~UndergraduateStudent();
        virtual bool checking_a_course(std::string);
        virtual bool register_a_course(Grade*);
        virtual bool dropping_a_course(std::string);

    private:
        static const int max_no_of_courses = 40;
        Grade * studentRecord [max_no_of_courses];
};

#endif // UNDERGRADUATESTUDENT_H
