#include <iostream>

using namespace std;

int main(){
    int length;
    cin >> length;

    int *array = new int[length];

    array[0] = 1;
    array[1] = 2;

    for(int i=0; i<length; i++){
        cout << array[i] << endl;
        cout << &(array[i]) << endl;
    }

    delete [] array;

    cout << "메모리를 delete한 이후" << endl;
    for(int i=0; i<length; i++){
        cout << array[i] << endl;
        cout << &(array[i]) << endl;
    }

    return 0;
}