//
// Created by 戴鹏 on 2022/5/11.
//
#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main(int argc, char** argv)
{
    ofstream outfile ("a.txt");
    if (!outfile){
       cerr << "打开文件错误" << endl;
    }else{
        outfile << "aaaaa" <<endl;
    }
    string content ;
    ifstream  infile("a.txt");
    while (infile >> content){
        cout << content <<endl;
    }
    return 0;
}
