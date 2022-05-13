//
// Created by 戴鹏 on 2022/5/11.
//
#include "vector"
#include "iostream"
using namespace std;
int main(int argc, char** argv)
{
    int elem_seq[] = {
            1, 2, 3,    // Fibonacci
            3, 4, 7,    // Lucas
            2, 5, 12,   // Pell
            3, 6, 10,   // Triangular
            4, 9, 16,   // Square
            5, 12, 22   // Pentagonal
    };
    vector<int> fibonacci (elem_seq,elem_seq+5);

    vector<int> *p = &fibonacci;
    if (p && !p->empty()){
       cout << p -> size();
    }

    return 0;
}
