#include <iostream>

using namespace std;

int main(){
    const int num_rows = 3;
    const int num_cols = 5;

    // int array[num_rows][num_cols]; // row major 방식

    int array[num_rows][num_cols] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    for(int i=0; i<num_rows; i++){
        for(int j=0; j<num_cols; j++){
            cout << &(array[i][j]) << endl; // 쭉 이어져있음
        }
    }


    return 0;
}