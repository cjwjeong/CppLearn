#include <iostream>

using namespace std;

int main(){
    int fibonacci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};


    //change value
    for (auto &i : fibonacci){
        i *= 10;
    }

    //output
    for (const auto i : fibonacci){
        cout << i << endl;
    }


    return 0;
}