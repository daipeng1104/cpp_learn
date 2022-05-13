//
// Created by 戴鹏 on 2022/5/11.
//
#include "vector"
#include "iostream"
using namespace std;

int main(int argc, char** argv)
{
    const int pell_size = 12;
    vector<int> pell_seq(pell_size);
    pell_seq[0] = 1;
    pell_seq[1] = 1;
    for (int i = 2; i < pell_size; ++i) {
        pell_seq[i] = pell_seq[i-1] + pell_seq[i-2];
    }
    for (int i = 0; i < pell_size; ++i) {
        cout << pell_seq[i] <<'\n';
    }
    return 0;
}
