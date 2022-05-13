//
// Created by 戴鹏 on 2022/5/11.
//
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string user_name;
    string last_name;
    cout << "please enter your first name: ";
    cin >> user_name;
    cout << "please enter your last name: ";
    cin >> last_name;
    cout << '\n' << "hello! " <<user_name<<" "<<last_name<< " ,nice to meet you";
    return 0;
}

