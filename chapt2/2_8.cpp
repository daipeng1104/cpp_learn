//
// Created by 戴鹏 on 2022/5/11.
//

//
// Created by 戴鹏 on 2022/5/11.
//
#include "vector"
#include "iostream"

using namespace std;


const vector<int> *
fibon_seq(int size);

inline bool is_size_ok(int size);
bool seq_elem(int pos,int &elem, const vector<int> * (*seq_ptr)(int));

inline bool is_size_ok(int size){
    if (size <= 0 || size > 1024){
        cout << "invlaid size";
        return false;
    } else{
        return true;
    }
}

const vector<int> *
fibon_seq(int size){
    if (!is_size_ok(size)){
        return 0;
    }
    static vector<int> elems;
    if (size <= elems.size()){
        return &elems;
    }

    for (int i = elems.size() ; i < size; ++i) {
        if (i == 0 || i == 1){
//            elems [i] = 1; 这里不能这样赋值，因为没有声明大小
            elems.push_back(1);
        }else{
            elems.push_back(elems[i-1] + elems[i-2]);
        }
    }
    return &elems;
}
bool seq_elem(int pos,int &elem, const vector<int> * (*seq_ptr)(int)){
    if (!seq_ptr){
        cout << "seq_ptr point err" << endl;
        return false;
    }
    const vector<int> * vec = seq_ptr(pos);
    if (!vec){
        elem = 0;
        return false;
    }
    elem = (*vec)[pos-1];
    return true;
}

int main(int argc, char** argv)
{
    int elem;
    if (seq_elem(6,elem,fibon_seq)){
        cout << elem;
    }
    return 0;
}