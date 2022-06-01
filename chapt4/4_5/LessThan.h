//
// Created by 戴鹏 on 2022/6/1.
//

#ifndef CPP_LEARN_LESSTHAN_H
#define CPP_LEARN_LESSTHAN_H


class LessThan {
public:
    LessThan(const int val): _val(val){}
    int comp_val()const{return _val;}
    void comp_val(const int val){_val = val;}
    bool operator()(int value) const;
private:
    int _val;
};


#endif //CPP_LEARN_LESSTHAN_H
