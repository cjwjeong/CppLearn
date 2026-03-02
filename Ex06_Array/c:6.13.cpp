#include <iostream>

int main(){
    int value = 5;
    const int *ptr1 = &value; // 가르키는 값을 못바꿈
    int *const ptr2 = &value; // 주소를 못바꿈
    const int *const ptr3 = &value; // 둘다 못바꿈

    return 0;
}