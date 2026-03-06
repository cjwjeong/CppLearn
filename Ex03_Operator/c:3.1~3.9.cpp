#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main(){

    // 3.1 연산자 우선순위와 결합 법칙
    cout << pow(2, 3); // 2^3 = 8

    // 3.2 산술 연산자
    cout << -5 / 2 << endl; // 정수끼리의 연산은 절삭

    // 3.3 증감 연산자
    int x = 6, y = 6;
    cout << x << " " << y << endl;
    // cout << ++x << " " << --y << endl; // 7 5 대입 후 실행
    cout << x++ << " " << y-- << endl; // 6 6 대입 전 실행

    // 3.4 sizeof 연산자, 쉼표 연산자, 삼항 연산자
    /*
    sizeof  : 데이터형의 크기를 알고싶을 때 쓰는 연산자
    컴마 연산자: 쭉 계산하고 마지막을 배정하는 연산자
    조건 연산자: 조건에 따라 다른 값이 배정하는 연산자
    
    */

    float a;
    cout << sizeof(a) << endl;
    cout << sizeof(float) << endl;


    int x = 3;
    int y = 10;
    int z = (++x, ++y);
    // /*
    // ++x;
    // ++y;
    // int z = y; 와 같음 
    // */
    cout << z << endl;

    const int k = (2 > 1)? 3 : 4;

    // 3.5 관계 연산자

    double d1(100 - 99.99);
    double d2(10 - 9.99);

    
    cout << d1 << " " << d2 << endl;

    if (d1 == d2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

        if (d1 > d2)
            cout << "di is bigger" << endl;

    // 3.6 논리연산자

    //XOR
    // 두 값의 불리언이 반대여야 true

    bool x = true;
    bool y = false;

    cout << (x != y) << endl;

    // 3.7 비트단위 연산자
    // << left shift
    unsigned int a = 3;

    cout << bitset<4>(a) << endl; // 4비트 2진수

    unsigned int b = a << 3; // 2를 몇 제곱해주는 연산, shift할 수 없으면 0으로

    cout << bitset<4>(b) << " " << b << endl;


    // ~
    unsigned int a = 1024;

    cout << bitset<16>(a) << endl;

    cout << bitset<16>(~a) << endl;

    // &, |
    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    cout << a <<  " " << b << endl;

    cout << bitset<4>(a&b) << endl;
    cout << bitset<4>(a|b) << endl;

    cout << (a&b)<<  " " << (a|b) << endl;

    // 3.8 비트 플래그, 비트 마스크
    //비트 플래그
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;


    unsigned char items_flag = 0;
    cout << bitset<8>(items_flag) << endl;

    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    //item0 on
    items_flag |= opt0;
    cout << bitset<8>(items_flag) << endl;

    //item0 lost
    items_flag &= ~opt0;
    cout << bitset<8>(items_flag) << endl;

    // item1을 갖고 있는가?
    if(items_flag & opt1){
        cout << "가지고 있다." << endl;
    } else {
        cout << "안 가지고 있다." << endl;
    }

    //비트 마스크

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;

    cout << bitset<32>(pixel_color) << endl;
    cout << bitset<32>(red_mask) << endl;

    unsigned char red, green, blue;

    blue = pixel_color & blue_mask;
    cout << bitset<8>(blue) << " " << int(blue) << endl;

    green = (pixel_color & green_mask) >> 8;
    cout << bitset<8>(green) << " " << int(green) << endl;

    return 0;
}