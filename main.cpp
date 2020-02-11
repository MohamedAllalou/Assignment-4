// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

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

using namespace std;

Log g_log;

int main()
{
    char generic_char;
    int generic_int;
    string generic_string, generic_string2, generic_string3;
    Time generic_time (5, 12);
    cout << generic_time;

    Time t1(2,1);
    Time t2(4,1);

    Course c1("Programming Methodology","Coen 244");
    c1.print();
    CourseSchedule s1(c1,"Coen 243",t1,t2);
    s1.print();

    CourseRegistration registar(c1);

    registar.register_a_course(1);
    registar.register_a_course(2);
    registar.register_a_course(3);
    registar.register_a_course(4);

    registar.print();

    registar.dropping_a_course(2);
    registar.dropping_a_course(6);
    registar.print();

    DatabaseManager D1;

    for (int i=1; i>=1;) {
        cout << endl << " Welcome to the Allalou & Iqbal School of Social Engineering Student Information System (SIS) " << endl;
        cout << " Please carefully analyze the following options: " << endl << endl;
        cout << " If you want to... " << endl;
        cout << " Enroll a new student into the University, enter 1 " << endl;
        cout << " Remove a student from the University, enter 2 " << endl;
        cout << " Register an enrolled student to a class, enter 3 " << endl;
        cout << " De-register a student from a class, enter 4 " << endl;
        cout << " View a particular students' student record, enter 5 " << endl;
        cout << " View a list of all students registered to a particular course, enter 6 " << endl;
        cout << " Access the debug log menu, enter 7 " << endl;
        cout << " Exit the SIS, enter 0 " << endl << endl;
        cout << " Enter your response here : " ;

        cin >> i;
        cout << endl;
        system ("CLS");

        switch (i) {
            case 0: cout << " You have chosen to exit the SIS. " << endl << " Goodbye! " << endl;
                    system ("PAUSE");
                    break;
            case 1: {
                    cout << " You have chosen to enroll a new student into the University " << endl;
                    cout << " Please enter the student name: ";
                    cin.ignore();
                    getline(cin, generic_string);
                    cout << endl << "Please enter the student ID: ";
                    cin >> generic_int;
                    UndergraduateStudent * generic_student_ptr = new UndergraduateStudent (generic_string, generic_int);
                    D1.insert_function(generic_student_ptr);
                    break;
            }
            case 2: cout << " You have chosen to remove a student from the University " << endl;
                    system ("PAUSE");
                    break;
            case 3: cout << " You have chosen to register an enrolled student to a class " << endl;
                    system ("PAUSE");
                    break;
            case 4: cout << " You have chosen to de-register a student from a class " << endl;
                    system ("PAUSE");
                    break;
            case 5: cout << " You have chosen to view a particular students' student record " << endl;
                    system ("PAUSE");
                    break;
            case 6: cout << " You have chosen to view a list of all students registered to a particular course " << endl;
                    system ("PAUSE");
                    break;
            case 7:
                {
                int i2 = 0;
                do {
                        cout << " You have chosen to access the debug menu " << endl;
                        cout << " To print the logs, enter 1 " << endl;
                        cout << " To clear the logs, enter 2 " << endl;
                        cout << " To add a message to the end of the logs, enter 3 " << endl;
                        cout << " To return to the previous menu, enter 0 " << endl;

                        cin >> i2;
                        system ("CLS");
                        cout << endl;

                        switch (i2) {
                        case 0: break;
                        case 1: g_log.print();
                                cout << endl;
                                break;
                        case 2: g_log.clearall();
                                cout << "logs cleared" << endl;
                                break;
                        case 3: cout << "Enter your message: ";
                                cin.ignore();
                                getline(cin, generic_string);
                                g_log.write(generic_string);
                                cout << endl << "Your entry has been added" << endl;
                                break;
                        default: cout << "Unrecognized input" << endl;
                                break;
                        }
                    } while(i2);
                    system ("PAUSE");
                    break;
                }
            default: cout << " Unrecognized input, returning to previous menu " << endl;
                    break;
        }

        cout << " --------------- " << endl << endl;
    }
    return 0;
}
