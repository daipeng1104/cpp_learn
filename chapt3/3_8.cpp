//
// Created by 戴鹏 on 2022/5/17.
//

#include "set"
#include "iostream"
#include "vector"
using namespace std;

void print_set(set<int> &elem_set){
    set<int>::iterator it = elem_set.begin();
    for (;it != elem_set.end(); ++it) {
        cout<< *it <<" ";
    }
    cout<<endl;
}
int main(int argc, char** argv)
{
    int ia[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> vec(ia,ia+10);
    set<int> iset(vec.begin(),vec.end());
    print_set(iset);
    iset.insert(12);
    print_set(iset);
    iset.clear();
    iset.insert(vec.begin(),vec.end());
    print_set(iset);
    return 0;
}