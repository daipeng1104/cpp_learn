//
// Created by 戴鹏 on 2022/5/24.
//

#ifndef CPP_LEARN_STACK_H
#define CPP_LEARN_STACK_H

#endif //CPP_LEARN_STACK_H
#include "string"
#include "vector"
using namespace std;
class Stack{
public:
    bool push(const string&);
    bool pop(string &elem);
    bool peek(string &elem);
    bool find(string &elem);

    bool empty();
    bool full();

    int size(){return _stack.size();};

private:
    vector<string> _stack;
};
