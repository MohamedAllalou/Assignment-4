// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef GRADE_H
#define GRADE_H

#include "Log.h"
#include "Time.h"
#include "Course.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class Grade
{
    public:
        Grade();
        Grade(Course, std::string);
        virtual ~Grade();

        friend	std::ostream&operator<<(std::ostream	&,Grade&);

        Course Getcourse() { return course; g_log.write("Grade Getcourse function called"); }
        void Setcourse(Course val) { course = val; g_log.write("Grade Setcourse function called"); }
        std::string Getgrade() { return grade; g_log.write("Grade Getgrade function called"); }
        void Setgrade(std::string val) { grade = val; g_log.write("Grade Setgrade function called"); }



    private:
        Course course;
        std::string grade;
};

#endif // GRADE_H
