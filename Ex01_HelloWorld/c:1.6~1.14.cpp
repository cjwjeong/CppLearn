#include <iostream>
#include "add.h" // 1.13 헤더 파일 활용
#include <algorithm>

#define MY_NUMBER 9

// 1.13 네임스페이스
namespace MySpace1{
    int multiply(int a, int b){
        return a * b;
    }
}

namespace MySpace2{
    int multiply(int a, int b){
        return a * b;
    }
}

using namespace std;

int main(){

    // 1.8 연산자
    /*
        리터럴: 10, "Hello"처럼 고정된 값
    */
    int x = 2;
    int y = (x > 0) ? 1 : 2; // 삼항 연산자

    cout << y << endl;


    // 1.11 헤더 파일 만들기
    cout << add(2, 2) << endl;

    // 1.13 namespace
    /*
        명칭은 같은데 다른 로직을 처리하는 함수를 만들 경우
    */
    cout<< MySpace1::multiply(1, 2) << endl;
    cout<< MySpace2::multiply(1, 2) << endl;

    // 1.14 전처리기
    cout << MY_NUMBER << endl;
    cout << max(2, 3) << endl;
    
    return 0;
}