//
// Created by 7szczepanski on 2017-01-12.
//

#include "Comparing.h"



Comparing::Comparing() {
    vector<string> tab;
    string nameA = fileAname;
    string nameB = fileBname;
    string nameC = fileCname;
    ifstream fileA;
    ifstream fileB;
    ofstream fileC;
    bool exist=false;
    string line;
    string sLine;
    fileA.open(nameA);


    while(fileA.good())
    {
        getline(fileA,line);
        tab.push_back(line);
    }
    fileA.close();

    fileB.open(nameB);
    fileC.open(nameC);
    if(!fileA && !fileB && fileC)
    {
        throw std::exception();
    }

    while(fileB.good())
    {
        getline(fileB,line);
        exist=true;
        for(size_t i=0;i<tab.size();i++)
        {
            if(tab[i]==line)
            { exist=false; break;} // break becasue we dont want to check other lines and waste time
        }
        if(exist==true)
            fileC<<line<<endl;
    }
    fileB.close();
    fileC.close();

}

Comparing::~Comparing() {

}


void Comparing::setFAname(string filAname){
    string fileAname = filAname;
}

void Comparing::setFBname(string filBname){
    string fileBname = filBname;
}

void Comparing::setFCname(string filCname){
    string fileBname = filCname;
}

//string Comparing::getFAname(){
//    return fileAname;
//}
//
//string Comparing::getFBname(){
//    return fileBname;
//}
//
//string Comparing::getFCname(){
//    return fileBname;
//}
