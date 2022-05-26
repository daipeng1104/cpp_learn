//
// Created by 戴鹏 on 2022/5/25.
//

#ifndef CPP_LEARN_MATRIX_H
#define CPP_LEARN_MATRIX_H


class Matrix {
public:
    Matrix(int row,int col)
    :_row(row),_col(col)
    {
        _pmat = new double [_row*_col];
    }
    ~Matrix()
    {
        delete []_pmat;
    }
   // 拷贝构造函数会在构造的时候调用
   // 这个在Matrix mat2 = mat; 这种情况默认就调用了，可以改变成员逐一初始化的默认行为
    Matrix(const Matrix &rhs);
   // 会在赋值操作时候调用
    Matrix& operator=(const Matrix& rhs);

private:
    int _row,_col;
    double * _pmat;
};


#endif //CPP_LEARN_MATRIX_H
