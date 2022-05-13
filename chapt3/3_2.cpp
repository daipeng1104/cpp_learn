//
// Created by 戴鹏 on 2022/5/12.
//
#include "iostream"
#include "string"
#include "vector"
#include "list"
using namespace std;

template <typename itr_type,typename elem_type>
itr_type* find(const itr_type*,const itr_type*,const elem_type&);

template <typename itr_type,typename elem_type>
itr_type* find(const itr_type* first,const itr_type* last,const elem_type& value){
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

int main(int argc, char** argv)
{
    int arr [] = {1,2,3,4};
    int* elem = find(arr,arr+4,3);
    cout << *elem <<endl;
    list<int> list1(arr,arr+4);
    list<int> ::iterator it;
    it = find(list1.begin(),list1.end(),3);
    cout<<*it<<endl;
    return 0;
}