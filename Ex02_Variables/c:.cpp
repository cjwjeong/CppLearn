#include <iostream>

int main(){
    using namespace std;

    //2.6 boolean 자료형과 if문

    bool b1 = true;
    bool b2(false);

    cout << b1 << endl;
    cout << !b1 << endl;

    cout << std::boolalpha;
    cout << (true && true) << endl; // And 오퍼레이터
    cout << (true || false) << endl; // Or 오퍼레이터

    if (true)
        cout << "this is true" << endl;
    else
        cout << "this is false" << endl;


    //2.7 문자형 char type
    char c1('A'); // or c1(65) 아스키 코드로 초기화 가능
    cout << c1 << " " << int(c1) <<endl;


    //2.8 리터럴 상수
    unsigned int n = 5u;
    long n2 = 5L;
    float pi = 3.14f;

    int x = 012; //8진수  출력 10
    int y = 0xF; //16진수

    //2.9 심볼릭 상수
    const int price_per_item = 10; //price_per_item = 11; 변수가 변할 수 없음
    
    void printNumber(const int i); // 이런 경우가 많음
    return 0;

}