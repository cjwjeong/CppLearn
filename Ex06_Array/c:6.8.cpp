#include <iostream>

using namespace std;

int main(){

    // 정적 배열에서의 포인터
    int array[5] = {9, 7, 5, 3, 1};

    cout << array[0] << " " << array[1] << endl;
    cout << array << endl;
    cout << &(array[0]) << endl;

    //sizeof 연산에서 정적 배열과 포인터의 차이
    int my_arr[5] = {1, 2, 3, 4, 5};
    int *p_arr = my_arr;

    cout << sizeof(my_arr) << endl;
    cout << sizeof(p_arr) << endl;

    return 0; 
}

