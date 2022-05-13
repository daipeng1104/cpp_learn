//
// Created by 戴鹏 on 2022/5/12.
//
#include "vector"
#include "iostream"
#include "string"
using namespace std;
template <typename T>
void display_message(const string &,const vector<T> & );

template <typename T>
void display_message(const string & msg,const vector<T> & vec){
    cout << msg;
    for (const auto &item : vec){
        cout << item <<" ";
    }
}

int main(int argc, char** argv)
{
    const int arr1 []= {1,2,3,4};
    const vector<int> vec1(arr1,arr1+4);
    display_message("vec1:",vec1);

    const string arr2 []= {"a","b","c","d"};
    const vector<string> vec2(arr2,arr2+4);
    display_message("vec2:",vec2);
    return 0;
}