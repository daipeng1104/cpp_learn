//
// Created by 戴鹏 on 2022/5/15.
//
#include "algorithm"
#include "vector"
using namespace std;
//bool grow_vec(vector<int> &vector, int elem){
//
//}

bool is_elem(vector<int> &vec1, int elem){
//    vector<int>::iterator it = max_element(vec1.begin(),vec1.end());
//    if (*it < elem){
//        return grow_vec(vec1,elem);
//    }
//    if (*it == elem){
//        return true;
//    }
    return binary_search(vec1.begin(),vec1.end(),elem);
}


int main(int argc, char** argv)
{
    const int arr [] ={6,2,3,4,5};
    vector<int> ivec(arr,arr+5);
    vector<int> temp(ivec.size());
    copy(ivec.begin(),ivec.end(),temp);
    sort(temp.begin(),temp.end());
    binary_search(temp.begin(),temp.end(),6);
    return 0;
}