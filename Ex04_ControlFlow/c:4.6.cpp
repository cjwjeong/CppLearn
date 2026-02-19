#include <iostream>
#include <string>

int main(){
    using namespace std;

    const char my_strs [] = "Hello, World!";
    const string my_hello = "Hello, World!";
    const string my_yaho = " Yaho!!!";
    cout << my_hello + my_yaho << endl;

    string my_string;
    //cin >> my_string; // 빈칸이 있을 시, 끊어서 받음
    getline(cin, my_string); // 빈칸을 포함하여 한 줄로 받는 법
    cout << my_string << endl;
    cout << my_string.length() << endl;

    return 0;
}