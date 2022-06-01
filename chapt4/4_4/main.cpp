//
// Created by 戴鹏 on 2022/5/26.
//
#include "iostream"
#include "Triangular.h"
using namespace std;
int main(int argc, char** argv)
{
    char ch;
    bool more = true ;
    while (more){
        cout << "Enter value: ";
        int ival;
        cin >> ival;
        bool is_elem = Triangular::is_elem(ival);
        cout << ival
        <<(is_elem?" is ":" is not ")
        <<"an element int the series.\n"
        <<"Another value?(y/n)";
        cin >> ch;
        if (ch =='n' || ch=='N'){
            more = false;
        }
    }

    return 0;
}