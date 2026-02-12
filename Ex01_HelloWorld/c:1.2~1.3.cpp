#include <iostream>

int main(){
    //주석 다는법

    //출력
    std::cout << "Hello, World!" << std::endl;

    // 변수 선언(c와 같음)
    int x = 1; // initialization
    int x(1); //도 가능

    x = 2; // assignment  
    
    std::cout << x << std::endl;
    std::cout << &x << std::endl; // 메모리의 주소를 나타냄



    return 0;
}
