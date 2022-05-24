//
// Created by 戴鹏 on 2022/5/24.
//
#include "Stack.h"
#include "iostream"
using namespace std;
int main(int argc, char** argv)
{
    Stack stack;
    stack.push("abc");
    string elem = "abc";
    cout << stack.find(elem)<<endl;
    stack.pop(elem);
    cout <<stack.size()<<endl;

    return 0;
}