#include <iostream>
#include <typeinfo>

int main(){
    using namespace std;

    cout << typeid(4).name() << endl;

    //numeric conversion
    int i = 30000;
    char c = i;
    cout << static_cast<int>(c) << endl; // 변환 가능한 규칙만 변환해줌

    return 0;
}