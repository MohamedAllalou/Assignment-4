// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef COURSE_H
#define COURSE_H

#include "Log.h"
#include "Time.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class Course
{
    public:
        Course();
        Course(std::string CourseName ,std::string CourseNumber);
        virtual ~Course();
        virtual void print();

        std::string GetcourseNumber() { return courseNumber; g_log.write("Course GetcourseNumber function called"); }
        void SetcourseNumber(std::string val) { courseNumber = val; g_log.write("Course SetcourseNumber function called"); }
        std::string GetcourseName() { return courseName; g_log.write("Course GetcourseName function called"); }
        void SetcourseName(std::string val) { courseName = val; g_log.write("Course SetcourseName function called"); }

    protected:

    private:
        std::string courseNumber;
        std::string courseName;
};

#endif // COURSE_H
