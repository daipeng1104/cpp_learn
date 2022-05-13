//
// Created by 戴鹏 on 2022/5/12.
//
#include "iostream"
#include "string"
#include "vector"
using namespace std;

template <typename elem_type>
elem_type* find(const elem_type*,const elem_type*,const elem_type&);

template <typename elem_type>
elem_type* find(const elem_type* first,const elem_type* last,const elem_type& value){
    if ( !first || !last){
        return 0;
    }
    for (; first != last; ++first) {
        if (*first == value){
            return first;
        }
    }
    return 0;
}

template <typename elem_type>
const elem_type* find(const elem_type*,const int size,const elem_type&);

template <typename elem_type>
const elem_type* find(const elem_type* first,const int size,const elem_type& value){
    if (!first){
        return 0;
    }
    for (int i = 0 ; i< size; ++i) {
        if (first[i] == value){
            return &first[i];
        }
    }
    return 0;
}

int main(int argc, char** argv)
{
    int arr [] = {1,2,3,4};
    int* elem = find(arr,arr+4,3);
    cout << *elem <<endl;

    const int* elem1 = find(arr+1,4,3);
    cout << *elem <<endl;
    return 0;
}