//
// Created by 戴鹏 on 2022/5/17.
//

#include "map"
#include "string"
#include "iostream"
using namespace std;

void print_map(map<string,int> &m){
    map<string,int>::iterator begin=m.begin();
    for (;begin != m.end();begin++) {
        cout<< "key: " << begin->first << " value: "<<begin->second<< endl;
    }
}

bool find1(map<string,int> &words,string key){
    return words[key] != 0;
}

bool find2(map<string,int> &words,string key){
    map<string ,int>::iterator it = words.find(key);
    return it != words.end();
}

bool find3(map<string,int> &words,string key){
    return words.count(key) != 0;
}

int main(int argc, char** argv)
{
    map<string,int> words;
    words["vermeer"] = 1;
    words["a"];//这种也会放入map中，给个初始值
    words["a"] =1;
    print_map(words);
    cout << find1(words,"b")<<endl; // 会添加到map中，并给初始值0
    print_map(words);

    return 0;
}