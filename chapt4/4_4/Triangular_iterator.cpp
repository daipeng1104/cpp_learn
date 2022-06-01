//
// Created by 戴鹏 on 2022/5/26.
//

#include "Triangular_iterator.h"
#include "Triangular.h"

inline bool Triangular_iterator::operator==(const Triangular_iterator & it) const {
    return this->_index == it._index;
}

inline bool Triangular_iterator::operator!=(const Triangular_iterator & it) const {
    return !(*this == it);
}

Triangular_iterator &Triangular_iterator::operator++() {
    ++ _index;
    check_integrity();
    return *this;
}

Triangular_iterator Triangular_iterator::operator++(int) {
    Triangular_iterator tmp = *this;
    ++_index;
    check_integrity();
    return tmp;
}

void Triangular_iterator::check_integrity() const {
    if (_index > Triangular::_max_elems){
//        throw iterator_overflow();
    }
    if (_index >= Triangular::_elems.size()){
        Triangular::gen_elements(_index+1);
    }
}

int Triangular_iterator::operator*() const {
        check_integrity();
        return Triangular::_elems[_index];
}




