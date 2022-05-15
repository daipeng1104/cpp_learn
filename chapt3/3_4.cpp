//
// Created by 戴鹏 on 2022/5/15.
//
#include "vector"
#include "list"
#include "deque"
#include "string"
using namespace std;
int main(int argc, char** argv)
{
    const int arr [] ={1,2,3,4,5};
    list<int> ilist(arr,arr+5);
    list<int>::iterator begin = ilist.begin();
    while(begin != ilist.end()){
        if (*begin == 3){
            ilist.insert(begin,10);
        }
        begin ++;
    }

    const string sval = "part two";
    const string sarr [] = {"part one","part two","part three"};
    list<string> slist(sarr,sarr+3) ;
    list<string> :: iterator it = find(slist.begin(),slist.end(),sval);
    slist.insert(it,4,string("dummy"));

    int ia1[7] = {1,1,2,3,5,55,89};
    int ia2[4] = {8,13,21,34};
    list<int> elems(ia1,ia1+7);

    list<int>::iterator it1=find(elems.begin(),elems.end(),55);
    elems.insert(it1,ia2+1,ia2+3);

    elems.erase(it1);
    elems.clear();

    return 0;
}