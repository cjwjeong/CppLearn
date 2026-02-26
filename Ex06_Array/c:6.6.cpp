#include <iostream>
#include <cstring>

using namespace std;

int main(){

    //char array
    char myString[] = "string";

    for(int i=0; i<7; i++){ // 문자열에 마지막임을 표기하는 null이 들어있어 크기가 7
        cout << myString[i] << endl;
    }

    //null chracter
    char myString2[255]; 
    cin.getline(myString2, 255); //빈칸까지 읽는
    myString2[5] = '\0'; //6번째 글자까지만 출력
    cout << myString2 << endl;

    //전통적인 cstring
    char source[] = "Copy this!";
    char dest[50];
    strcpy(dest, source);
    /*
        strcat(): 한 문자열뒤에 다른 문자열을 붙여주는
        strcmp(): 문자열이 동일한 지 확인하는
    */

    cout << source << endl;
    cout << dest << endl;


    return 0;
}