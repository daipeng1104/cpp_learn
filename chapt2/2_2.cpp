//
// Created by 戴鹏 on 2022/5/11.
//
#include "vector"
#include "iostream"
using namespace std;

void display(vector<int> & );
void swap(int &,int &);
//void bubble_sort(vector<int> &);
void bubble_sort(vector<int> *);

void display(vector<int> &vec){
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] <<" ";
    }
}

void swap(int &a,int &b){
     int temp = a;
     a = b;
     b = temp;
}

//void bubble_sort(vector<int> &vec){
//    for (int i = 0; i < vec.size(); ++i) {
//        for (int j = i+1; j < vec.size(); ++j) {
//            if (vec[i] > vec [j]){
//                swap(vec[i],vec[j]);
//            }
//        }
//    }
//}

void bubble_sort(vector<int> *vec){
    for (int i = 0; i < (*vec).size(); ++i) {
        for (int j = i+1; j < (*vec).size(); ++j) {
            if ((*vec)[i] > (*vec) [j]){
                swap((*vec)[i],(*vec)[j]);
            }
        }
    }
}

int main(int argc, char** argv)
{
    int arr [] = {5,3,6,1,4,2};
    vector<int> vec(arr,arr+6);
    cout << "排序前:";
    display(vec);

//    bubble_sort(vec);
    bubble_sort(&vec);
    cout << "\n排序后:";
    display(vec);
    return 0;
}