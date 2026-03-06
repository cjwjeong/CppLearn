#include <iostream>

using namespace std;

int main(){
    int i = 5;
    float f = 0.1;
    char c = 'c';

    void *ptr = nullptr; // void pointer는 포인터 연산이 불가능

    ptr = &i;
    // ptr = &f;
    // ptr = &c;

    cout << *static_cast<int*>(ptr) << endl;
}