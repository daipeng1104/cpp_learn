//
// Created by 戴鹏 on 2022/5/25.
//

#ifndef CPP_LEARN_TRIANGULAR_H
#define CPP_LEARN_TRIANGULAR_H
#include "string"
#include "vector"
#include "Triangular_iterator.h"
using namespace std;

class Triangular {
    friend class Triangular_iterator;
public:
    typedef Triangular_iterator iterator;
    // 一组重载的constructor
    Triangular();
    Triangular(int len =1 ,int beg_pos =1);
    Triangular(const Triangular &rhs);
    int length() const{return _length;};
    int beg_pos() const{return  _beg_pos;};
    int elem(int pos) const;
    Triangular& copy(const Triangular &rhs);
    static bool is_elem(int value);
    static void gen_elems_to_value(int value);
    static void gen_elements(int length);

    bool next  (int &val)const;
    void next_reset() const{_next = _beg_pos -1;};
//    friend int Triangular_iterator::operator*() const;
//    friend void Triangular_iterator::check_integrity()const;

    Triangular_iterator begin() const{
        return Triangular_iterator(_beg_pos);
    }
    Triangular_iterator end() const{
        return Triangular_iterator(_beg_pos+_length);
    }
private:
    string _name;
    int _length;
    int _beg_pos;
    mutable int _next;
    static const int _max_elems = 1024;
    static vector<int> _elems; //static修饰的，定义在类外.
};


#endif //CPP_LEARN_TRIANGULAR_H
