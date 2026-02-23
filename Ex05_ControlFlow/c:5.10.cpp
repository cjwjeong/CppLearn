#include <iostream>

using namespace std;

int getInt(){
    cout << "숫자를 입력하시오: " << endl;
    int x;
    cin >> x;

    if(cin.fail()){
        return 0;
    }

    cin.ignore(32767, '\n');

    return x;
}

char getOperator(){
    cout << "연산자를 입력하시오: " << endl;
    char cal;
    cin >> cal;
    cin.ignore(32767, '\n');

    // if(cal != '+' || cal != '-'){ return 'u'; }

    return cal;
}

int main(){
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    if (op == '+'){
        cout << x + y << endl;
    }else if (op == '-'){
        cout << x - y << endl;
    }

    return 0; 
}