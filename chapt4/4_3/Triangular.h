//
// Created by 戴鹏 on 2022/5/25.
//

#ifndef CPP_LEARN_TRIANGULAR_H
#define CPP_LEARN_TRIANGULAR_H
#include "string"
#include "vector"
using namespace std;

class Triangular {
public:
    // 一组重载的constructor
    Triangular();
    Triangular(int len =1 ,int beg_pos =1);
    Triangular(const Triangular &rhs);
    int length() const{return _length;};
    int beg_pos() const{return  _beg_pos;};
    int elem(int pos) const;

    bool next  (int &val)const;
    void next_reset() const{_next = _beg_pos -1;};
private:
    string _name;
    int _length;
    int _beg_pos;
    mutable int _next;
    static vector<int> _elems;
};


#endif //CPP_LEARN_TRIANGULAR_H
