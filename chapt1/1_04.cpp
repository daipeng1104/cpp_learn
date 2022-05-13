//
// Created by 戴鹏 on 2022/5/11.
//
#include "iostream"
#include "vector"

using namespace std;
int main(int argc, char** argv)
{
    const int seq_size = 18;
    int elem_seq[seq_size] = {
            1, 2, 3,    // Fibonacci
            3, 4, 7,    // Lucas
            2, 5, 12,   // Pell
            3, 6, 10,   // Triangular
            4, 9, 16,   // Square
            5, 12, 22   // Pentagonal
    };

    string seq_names[] = {
            "Fibonacci",
            "Lucas",
            "Pell",
            "Triangular",
            "Square",
            "Pentagonal"
    };

    // vector 使用数组初始化
//    vector<int> elem_vec (elem_seq,elem_seq + seq_size);
//    cout << elem_vec.size();

    int usr_val;
    int num_tries = 0;
    int num_right = 0;
    double usr_score = 0.0;
    int max_tries = 10;

    int cur_tuple = 0;
    while (true){
        num_tries += 1;
        cout << "\n前两个数字为: " << elem_seq[cur_tuple]
        << " "<<elem_seq[cur_tuple+1]
        << ",请输入后面的数字:" <<endl;
        cin >> usr_val;
        if (usr_val == elem_seq[cur_tuple + 2]){
            cout << "\n输入正确,此数列是"<<seq_names[cur_tuple/3] ;
            cur_tuple += 3;
            num_right += 1;
        }else {
            max_tries -= 1;
            if (max_tries == 0){
                cout << "\n尝试次数已经用完,游戏结束";
                break;
            } else{
                cout << "\n您还有"<<max_tries<<"次机会";
            }
        }

        if (cur_tuple == 18){
            cout << "\n数列已经猜完,游戏结束";
            break;
        }
    }
    cout<<"用户得分:"<< (1.0*num_right/num_tries)*100;

    return 0;
}
