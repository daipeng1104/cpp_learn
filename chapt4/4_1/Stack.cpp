//
// Created by 戴鹏 on 2022/5/24.
//

#include "Stack.h"

bool Stack::pop(string &elem) {
    if (empty()){
        return false;
    }
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool Stack::empty() {
    return _stack.empty();
}

bool Stack::push(const string & elem) {
    if (full()){
        return false;
    }
    _stack.push_back(elem);
    return true;
}

bool Stack::peek(string &elem) {
    if (empty()){
        return false;
    }
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool Stack::full() {
    return false;
}

bool Stack::find(string &elem) {
    auto it = std::find(_stack.begin(), _stack.end(), elem);
    return *it == elem;
}


