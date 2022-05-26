//
// Created by 戴鹏 on 2022/5/25.
//

#include "Matrix.h"
#include "iostream"

using namespace std;

Matrix::Matrix(const Matrix &rhs)
:_col(rhs._col),_row(rhs._row)
{
    cout << "调用Matrix拷贝构造函数" <<endl;
    _pmat = new double [_col*_row];
    for (int i = 0; i < _col * _row; ++i) {
        _pmat[i] = rhs._pmat[i];
    }
}

Matrix &Matrix::operator=(const Matrix &rhs) {
    if (this != &rhs){
        _col = rhs._col;
        _row = rhs._row;
        cout << "调用Matrix 赋值" <<endl;
        _pmat = new double [_col*_row];
        for (int i = 0; i < _col * _row; ++i) {
            _pmat[i] = rhs._pmat[i];
        }
    }
    return *this;
}
