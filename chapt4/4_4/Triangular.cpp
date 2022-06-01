//
// Created by 戴鹏 on 2022/5/25.
//

#include "Triangular.h"

vector<int> Triangular::_elems; //定义

Triangular::Triangular(int len, int beg_pos)
:_name("Triangular")
{
    _length = len > 0?len:1;
    _beg_pos = beg_pos >0?beg_pos:1;
    _next = _beg_pos-1;

    for (int ix =0; ix <= _length; ix++)
        _elems.push_back(ix * (ix + 1) / 2);
}

Triangular::Triangular(const Triangular &rhs)
    : _length (rhs._length),_beg_pos(rhs._beg_pos),_next(rhs._next)
{}

int Triangular::elem(int pos) const {
    return _elems[pos-1] ;
}

bool Triangular::next(int &val) const{
    if (_next < _beg_pos + _length -1){
        val = _elems[_next++];
        return true;
    }
    return false;
}

Triangular &Triangular::copy(const Triangular &rhs) {
    if (this != &rhs){
        this->_length = rhs._length;
        this->_beg_pos = rhs._beg_pos;
        this->_next = _beg_pos-1;
    }
    return *this;
}

bool Triangular::is_elem(int value) {
    if (_elems.empty() || _elems[_elems.size()-1] < value){
        gen_elems_to_value(value);
    }
    vector<int>::iterator it = find(_elems.begin(),_elems.end(),value);
    return *it == value;
}

void Triangular::gen_elems_to_value(int value) {
    int ix = _elems.size();
    if (!ix){
        _elems.push_back(1);
        ix = 1;
    }
    while (_elems[ix-1]<value && ix <_max_elems){
        ++ix;
        _elems.push_back(ix*(ix+1)/2);
    }
}

void Triangular::gen_elements(int length) {
    if (length <0 || length >_max_elems){

    }
    if (_elems.size() < length){
        int ix = _elems.size() ? _elems.size()+1:1;
        for (; ix <=length; ++ix) {
            _elems.push_back(ix*(ix+1)/2);
        }
    }
}

