//
// Created by 戴鹏 on 2022/5/13.
//
#include "vector"
#include "string"
#include "iostream"
using namespace std;
int main(int argc, char** argv)
{
    const int arr1 [] = {1,2,3,4};
    vector<int> vec1 (arr1,arr1+4);

    const int arr2 [] = {1,2,3,4};
    vector<int> vec2 (arr2,arr2+4);
    cout << (vec1 == vec2 )<<endl;
    cout << (vec1 != vec2 )<<endl;
    vec1.erase(vec1.begin());
    vec1.erase(vec1.begin()+1);
    cout << vec1[1]<<endl;
    vec1.clear();
    cout << vec1.size() << endl;
    return 0;
}