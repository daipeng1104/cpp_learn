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

