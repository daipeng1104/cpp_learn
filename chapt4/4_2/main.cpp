//
// Created by 戴鹏 on 2022/5/25.
//
#include "Matrix.h"
int main(int argc, char** argv)
{
    Matrix mat(2,3);
    {
        Matrix mat2 = mat;
        Matrix mat3(3,3);
        mat2 = mat3;
    }
    return 0;
}