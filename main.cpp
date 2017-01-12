#include <iostream>
#include "Comparing.h"

using namespace std;

int main()
{
    Comparing comp;
    string nameA, nameB, nameC;
    cout<<("Please input name of first file to compare")<<endl; cin>>nameA;
    cout<<("Please input name of second file to compare")<<endl; cin>>nameB;
    cout<<("Please input name file where I can save results")<<endl; cin>>nameC;
    comp.setFAname(nameA);
    comp.setFBname(nameB);
    comp.setFCname(nameC);
    try {
        Comparing();
    }
    catch (...) {

    }

    return 0;
}