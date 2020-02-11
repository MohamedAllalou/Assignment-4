// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#include "Student.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

extern Log g_log;

int Student::idcounter = 0;

Student::Student()
{
   studentName = " ";
   idcounter++;
   studentId = idcounter;
   g_log.write("Student default constructor called");
}

Student::Student(std::string s, int id)
{
    this -> studentName = s;
    if ( id <= idcounter) {
        idcounter++;
        this -> studentId = idcounter;
    }
    else { this -> studentId = id; idcounter = id+1; }
    g_log.write("Student overloaded constructor called");
}

void Student::print()
{
    cout << "Stduent Name: " << studentName << endl;
    cout << "Student ID: " << studentId << endl;
    g_log.write("Student print function called");
}


Student::~Student()
{
    g_log.write("Student destructor called");
}
