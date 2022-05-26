//
// Created by 戴鹏 on 2022/5/25.
//
#include "Triangular.h"
#include "iostream"
using namespace std;

int sum(const Triangular &trian){
    if (!trian.length()){
        return 0;
    }
    int val,sum = 0;
    trian.next_reset();
    while (trian.next(val)){
        sum +=val;
    }
    return sum;
}
int main(int argc, char** argv)
{
    Triangular tri(4);
    cout << sum(tri)<<endl;
    return 0;
}