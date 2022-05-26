//
// Created by 戴鹏 on 2022/5/25.
//

#ifndef CPP_LEARN_TRIANGULAR_H
#define CPP_LEARN_TRIANGULAR_H
#include "string"
using namespace std;

class Triangular {
public:
    // 一组重载的constructor
    Triangular();
    Triangular(int len =1 ,int beg_pos =1);
    Triangular(const Triangular &rhs);
private:
    string _name;
    int _length;
    int _beg_pos;
    int _next;
};


#endif //CPP_LEARN_TRIANGULAR_H
