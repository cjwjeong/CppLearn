#include <iostream>
#include <iomanip>
#include <cmath>


int main(){
    using namespace std;

    // 2.1 기본 자료형 소개
    bool bValue = false;
    char chValue = 'A';
    float fValue = 3.141592f;
    double dValue = 3.141592; 
    
    auto aValue = 3.141592; // 자동 타입 추정

    cout << (bValue ? 1 : 0) << endl;
    cout << bValue << endl; // 0
    cout << chValue << endl;
    cout << fValue << endl;
    cout << dValue << endl;

    cout << sizeof(dValue) << endl;

    //초기화 방법
    int a(3); //direct itialization
    int b{ 4 }; //uniform itialization
    int c = 5; //copy initialization

    //2.5 부동 소수점
    float f; // float와 double은 차지하는 메모리양이 아예 달라 컴퓨터가 다르게 인식함
    double d;
    long double ld;

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;

    cout << setprecision(16) << endl;
    cout << 1.0 / 3.0 << endl;

    //division0
    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << posinf << endl;
    cout << neginf << endl;
    cout << nan << endl;

    cout << isinf(posinf) << endl;
    cout << isinf(neginf) << endl;
    cout << isnan(nan) << endl;

    return 0;
}