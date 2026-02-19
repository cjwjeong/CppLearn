#include <iostream>

using namespace std;

int g_value = 123; // 전역변수
void doSomething(){
    static int a = 1; // 2번째 이상 사용부터는 초기화는 무시 그냥 메모리를 재사용
    ++a;
    cout << a << endl;
}

// forward declation 폴더 내에 이러한 함수가 있을테니 알아서 linking하세요 같은 것
extern void printHello(); // extern 생략가능

int main(){
    // 전역변수
    // cout << value << endl; // 123
    // int value = 1;
    // cout << value << endl; // 1
    // cout << ::value << endl; // 123, 전역변수를 부르는 법

    // static 메모리가 정적으로 선언, 초기화를 한번만 함(메모리가 고정된다는?...), 메모리를 계속 재사용
    // doSomething(); // 2
    // doSomething(); // 3

    // 전방선언
    printHello();

}