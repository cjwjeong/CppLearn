#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int width;
};

void doSomething(int my_arr[5]){ // array 전체를 인자로 받는게 아닌 array의 주소를 인자로 받음
    cout << &my_arr << endl;
    cout << &(my_arr[0]) << endl;
    cout << "Size in doSomething" << sizeof(my_arr) << endl; // 사이즈는 array 주소의 사이즈
}

int main(){

    // array 선언
    int one_student_score;
    int student_scores[5];

    cout << sizeof(one_student_score) << endl;
    cout << sizeof(student_scores) << endl;

    one_student_score = 100;
    student_scores[0] = 100;
    student_scores[1] = 90;

    // 구체 array 선언
    Rectangle rect_arr[10];
    rect_arr[0].length = 1;

    //array 선언 및 초기화
    int my_arr[5] = { 1, 2, 3, 4, 5};

    for(int i=0; i<5; i++){
        cout << my_arr[i] << endl;
    }

    // array의 주소
    int my_arr[5] = { 1, 2, 3, 4, 5};

    cout << (&my_arr) << endl;

    for(int i=0; i<5; i++){
        cout << &(my_arr[i]) << endl;
    }

    cout << &my_arr << endl;
    cout << &(my_arr[0]) << endl;
    cout << "Size in main" << sizeof(my_arr) << endl;

    doSomething(my_arr);


    return 0;
} 