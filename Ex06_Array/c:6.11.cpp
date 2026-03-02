#include <iostream>

using namespace std;

int main(){
    // 동적 할당
    int *ptr = new int;
    *ptr = 7;
    /*
        int *ptr = new int {7}; 와 같음
    */

    cout << ptr << endl;
    cout << *ptr << endl;

    // 사용한 메모리를 돌려줌
    delete ptr;
    
    cout << ptr << endl; // 주소는 남음
    cout << *ptr << endl; // 값만 날아감  

    ptr = nullptr;

    cout << ptr << endl; // 0x0


    // memory leak 메모리를 지우는 것을 깜빡하고 계속 만드는 경우ㅗ
    while (true){
        int *ptr = new int;
        cout << ptr << endl;
        // delete ptr; 요걸 추가해야 누수가 발생 안함
    }
    
    return 0;
}