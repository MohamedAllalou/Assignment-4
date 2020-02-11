// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef COURSESCHEDULE_H
#define COURSESCHEDULE_H

#include "Log.h"
#include "Time.h"
#include "Course.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class CourseSchedule
{
    public:
        CourseSchedule();
        CourseSchedule(Course, std::string, Time, Time);
        virtual ~CourseSchedule();

        virtual void print();

        Course* Getcourse() { return &course; g_log.write("CourseSchedule Getcourse function called"); }
        void Setcourse(Course val) { course = val; g_log.write("CourseSchedule Setcourse function called"); }
        std::string GetcoursePrerequisite() { return coursePrerequisite; g_log.write("CourseSchedule GetcoursePrerequisite function called"); }
        void SetcoursePrerequisite(std::string val) { coursePrerequisite = val; g_log.write("CourseSchedule SetcoursePrerequisite function called"); }
        Time Gettime1() { return time1; g_log.write("CourseSchedule Gettime1 function called");}
        void Settime1(Time val) { time1 = val; g_log.write("CourseSchedule Settime1 function called"); }
        Time Gettime2() { return time2; g_log.write("CourseSchedule Gettime2 function called"); }
        void Settime2(Time val) { time2 = val; g_log.write("CourseSchedule Settime2 function called"); }

    protected:

    private:
        Course course;
        std::string coursePrerequisite;
        Time time1, time2;
};

#endif // COURSESCHEDULE_H
