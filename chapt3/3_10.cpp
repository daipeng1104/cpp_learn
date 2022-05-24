//
// Created by 戴鹏 on 2022/5/24.
//
#include "string"
#include "iostream"
#include "vector"
#include "algorithm"
#include "fstream"
using namespace std;

void function1(){
    string word;
    vector<string> text;

    while (cin>>word && text.size() < 10){
        text.push_back(word);
    }

    sort(text.begin(),text.end());

    for (const auto &item : text){
        cout<< item<<" ";
    }
}

void function2(){
    vector<string> text;
    istream_iterator<string> is(cin);
    istream_iterator<string> eof;
    copy(is,eof, back_inserter(text));
    for (const auto &item : text){
        cout<< item<<" ";
    }
}

void  function3(){
    ifstream in_file("input");
    ofstream out_file("output");
    istream_iterator<string> is(in_file);
    istream_iterator<string> eof;

    vector<string> text;
    copy(is,eof, back_inserter(text));
    for (const auto &item : text){
        cout<< item<<" ";
    }
}

int main(int argc, char** argv)
{
//    function1();
//    function2();
    function3();
    return 0;
}