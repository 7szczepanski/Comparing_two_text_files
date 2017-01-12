//
// Created by 7sczepanski on 2017-01-12.
//
#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#ifndef COMPARING_TWO_FILES_COMPARING_H
#define COMPARING_TWO_FILES_COMPARING_H


class Comparing {
public:
    //overld

    Comparing();
    ~Comparing();
    void setFAname(string);
    void setFBname(string);
    void setFCname(string);
//    string getFAname();
//    string getFBname();
//    string getFCname();


    string fileAname;
    string fileBname;
    string fileCname;
};


#endif //COMPARING_TWO_FILES_COMPARING_H
