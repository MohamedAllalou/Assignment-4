// 40010809 - Mohamed Allalou
// 40017755 - Imaad Iqbal
// Assignment 4

#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>
#include <vector>

class Log
{
    public:
        Log();
        virtual ~Log();
        void print();
        void write(std::string, ...);
        void clearall ();


    protected:

    private:
        std::vector <std::string> loglist;
};

#endif // LOG_H
