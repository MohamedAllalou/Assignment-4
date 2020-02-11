// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef STUDENT_H
#define STUDENT_H

#include "Log.h"
#include "Time.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "Grade.h"

#include <iostream>
#include <string>
#include <vector>

extern Log g_log;

class Student
{
    public:
        Student ();
        Student (std::string, int);
        virtual ~ Student ();
        virtual bool checking_a_course(std::string) = 0;
        virtual bool register_a_course(Grade*) = 0;
        virtual bool dropping_a_course(std::string) = 0;

        void SetstudentName (std::string val){
            studentName = val;
            g_log.write("Student SetstudentName function called");
        };
        std::string GetstudentName() {return studentName; g_log.write("Student GetstudentName function called"); };
        void SetstudentID (int val) {studentId = val; g_log.write("Student SetstudentID function called"); };
        int GetstudentID() {return studentId; g_log.write("Student GetstudentID function called"); };
        virtual void print();

    protected :
        static const int no_of_offered_courses = 400;
        CourseSchedule * arrayCourse[no_of_offered_courses];

    private:
        std::string studentName;
        int studentId;
        static int idcounter;
};

#endif // STUDENT_H
