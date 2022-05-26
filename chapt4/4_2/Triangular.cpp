//
// Created by 戴鹏 on 2022/5/25.
//

#include "Triangular.h"

Triangular::Triangular() {
    _length = 1;
    _beg_pos = 1;
    _next = 0;
}


Triangular::Triangular(int len, int beg_pos)
:_name("Triangular")
{
    _length = len > 0?len:1;
    _beg_pos = beg_pos >0?beg_pos:1;
    _next = _beg_pos-1;
}

Triangular::Triangular(const Triangular &rhs)
    : _length (rhs._length),_beg_pos(rhs._beg_pos),_next(rhs._next)
{}
