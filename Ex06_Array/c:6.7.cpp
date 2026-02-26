#include <iostream>

using namespace std;

int main(){  

    // 주소 출력
    int x = 5;

    cout << x << endl;
    cout << &x << endl;

    // de-reference operator *
    cout << *(&x) << endl;

    // 포인터 선언
    int y = 1;
    int *ptr_y = &y;
    cout << typeid(ptr_y).name() << endl; 

    return 0;
}