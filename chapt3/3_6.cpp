//
// Created by 戴鹏 on 2022/5/15.
//

#include "vector"
#include "algorithm"
#include "functional"
#include "iostream"
#include "complex"
using namespace std;

vector<int> filter_ver1 (vector<int> &vec, int value, bool (*pred)(int ,int ));

vector<int> filter_ver1 (vector<int> &vec, int value, bool (*pred)(int ,int )){
    vector<int> nvec;
    for (int i = 0; i < vec.size(); ++i) {
        if (pred(vec[i],value)){
            nvec.push_back(vec[i]);
        }
    }
    return nvec;
}

bool less_than(int a, int b){
    return a < b;
}

template <typename intput_itr,typename output_itr,typename elem_type,typename comp>
output_itr filter(intput_itr begin,intput_itr end,output_itr out,elem_type elem,comp f){
    while ((begin = find_if(begin,end, bind2nd(f,elem))) != end){
        cout << "found value: "<< *begin;
        *out++ = *begin++;
    }
    return out;
}

int count_occurs (vector<int> &vec, int value){
    vector<int>::iterator begin =vec.begin();
    int count = 0;
    while (begin != vec.end()){
        if (*begin == value){
           count ++;
        }
        begin++;
    }
    return count;
}

vector<int> sub_vec(const vector<int> &vec,const int elem){
    vector<int> tempvec (vec);
    sort(tempvec.begin(),tempvec.end(),less<int>());
    vector<int>::iterator it =find_if(tempvec.begin(),tempvec.end(), bind2nd(greater<int>(),elem));
    tempvec.erase(tempvec.begin(),it);
    return tempvec;
}

int main(int argc, char** argv)
{
    const int arr [] ={6,6,3,4,5};
    vector<int> ivec(arr,arr+5);
    vector<int> result =  filter_ver1(ivec,4,less_than);
    for (const auto &item : result){
        cout << item << " ";
    }
    cout<< count_occurs(ivec,6) <<endl;

    sort(ivec.begin(),ivec.end(),greater<int>());
    for (const auto &item : ivec){
        cout << item <<" ";
    }

    binary_search(ivec.begin(),ivec.end(),2,greater<int>());
    // find_if第三个参数要求是一元的
    find_if(ivec.begin(),ivec.end(), bind2nd(less<int>(),2));

    return 0;
}
