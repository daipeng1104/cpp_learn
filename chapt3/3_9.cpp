//
// Created by 戴鹏 on 2022/5/24.
//
#include "vector"
#include "algorithm"
#include "functional"
#include "iostream"
#include "complex"
#include "iterator"
using namespace std;

template <typename intput_itr,typename output_itr,typename elem_type,typename comp>
output_itr filter(intput_itr begin,intput_itr end,output_itr out,elem_type elem,comp f){
    while ((begin = find_if(begin,end, bind2nd(f,elem))) != end){
        cout << "found value: "<< *begin<< endl;
        *out++ = *begin++;
    }
    return out;
}

int main(int argc, char** argv)
{
    const int arr [] ={6,6,3,4,5,10,11};
    vector<int> ivec;
    int arr2[7];

    // 数组不支持插入，只能这样来赋值
    cout<< "filter interger array for values less than 8" << endl;
    filter(arr,arr+7,arr2,8,less<int>());
    for (const auto &item : arr2){
        cout<< item<<" ";
    }
    cout<<endl;
    cout<< "filter interger vector for values less than 8" << endl;
    filter(arr,arr+7, back_inserter(ivec),8,less<int>());
    for (const auto &item : ivec){
        cout<< item<<" ";
    }
    return 0;
}
