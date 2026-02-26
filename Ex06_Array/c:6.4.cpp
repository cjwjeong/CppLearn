#include <iostream>

using namespace std;

int main(){
    int my_arr[5] = {3, 5, 1, 2, 4};

    const int length = 5;

    int temp = 0;

    for(int i = 0; i < length; i++){

        for(int j = 0; j < length; j++){
            if(j == i){ continue; }

            if(my_arr[i] < my_arr[j]){
                temp = my_arr[i];
                my_arr[i] = my_arr[j];
                my_arr[j] = temp;
            }
        }
    }

    for(int k=0; k < length; k++){
        cout << my_arr[k] << endl;
    }

    return 0;
}