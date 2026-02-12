#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

using namespace std;

int addTwoNum(int x, int y);
int main(){

    int x = 123;

    // cout
    cout << "Hello" << endl;
    cout << "x is " << x << endl;

    cout << "Hello" << "\t my world" << endl;

    cout << "안녕\n" << "반가워";

    cout << "\a"; // 오디오

    printf("안녕하세요"); 

    //cin
    int y;
    cin >> y;
    cout << y;

    //function
    cout << addTwoNum(2, 3) << endl;

    return 0;
}
int addTwoNum(int x, int y){
    return x + y;
}
