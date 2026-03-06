#include <iostream>

using namespace std;


void doSomething(int &n){
    
    n = 5;
    cout << "In doSomething" << endl;
    cout << n << endl;
    
}
int main(){
    int value = 1;
    int &ref = value; // value의 또 다른 이름?

    cout << ref << endl;
    cout << &ref << " " << &value << endl;

    int n = 3;
    doSomething(n);
    cout << "In main" << endl;
    cout << n << endl;


}