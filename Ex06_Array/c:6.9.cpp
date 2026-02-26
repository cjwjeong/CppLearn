#include <iostream>

using namespace std;

int main(){

    //포인터 연산
    int value = 7;
    int *ptr = &value;

    cout << uintptr_t(ptr) << endl;
    cout << uintptr_t(ptr+1) << endl; // 데이터 사이즈에 맞춰 한칸 씩 이동

    //포인터 연산과 배열
    int array[] = {1, 2, 3, 4, 5};
    int *p_arr = array;

    for(int i=0; i<5; i++){
        cout << *(p_arr+i) << endl; // array[i]와 동일
    }


    return 0; 
}