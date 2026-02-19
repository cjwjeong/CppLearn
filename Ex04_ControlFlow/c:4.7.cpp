#include <iostream>
#include <typeinfo>

enum Color{ // 유저 정의 데이터 타입, 열거형 데이터 타입
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN = 9, //숫자도 배정 가능
    
};

int main(){
    using namespace std;

    Color color = COLOR_BLACK;

    cout << color << endl; // 인덱스가 print됨
    cout << COLOR_RED << endl;
    
    return 0;
}