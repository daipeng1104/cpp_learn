//
// Created by 戴鹏 on 2022/5/26.
//

#ifndef CPP_LEARN_TRIANGULAR_ITERATOR_H
#define CPP_LEARN_TRIANGULAR_ITERATOR_H

class Triangular_iterator {
public:
    Triangular_iterator(int index):_index(index-1){}
    bool operator==(const Triangular_iterator&)const;
    bool operator!=(const Triangular_iterator&)const;
    int operator*()const;
    Triangular_iterator& operator++();
    Triangular_iterator operator++(int);
private:
    void check_integrity()const;
    int _index;
};


#endif //CPP_LEARN_TRIANGULAR_ITERATOR_H
