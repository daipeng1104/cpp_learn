//
// Created by 戴鹏 on 2022/6/1.
//

#include "LessThan.h"

bool LessThan::operator()(int value) const {
    return _val < value;
}
