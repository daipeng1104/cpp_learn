//
// Created by 戴鹏 on 2022/5/11.
//
#include "iostream"
using namespace std;

bool fibon_elem(int pos,int &elem);

bool fibon_elem(int pos,int &elem){
    bool flag ;
    if (pos < 0 || pos > 1024){
        return false;
    }
    int n1 = 1;
    int n2 = 1;

    for (int i = 2; i < pos; ++i) {
        elem = n1 + n2;
        n1 = n2;
        n2 = elem;
    }
    return true;
}

int main(int argc, char** argv)
{
    int elem ;
    int pos = 6;
    if (fibon_elem(pos,elem)){
        cout << "pos:"<< pos <<"上面的数字为:"<<elem<<endl;
    }
    return 0;
}