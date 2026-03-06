#include <iostream>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;


void doSomething(const array<int, 5> &arr){
    cout << arr.size() << endl;
}
int main(){

    // /*
    //     array: 정적 array
    // */
    // array<int, 5> arr = {1, 2, 0, -1, 9};

    // cout << arr[3] << endl;
    // //cout << arr.at(10) << endl; // 경계를 검사하는 로직 포함
    // cout << arr.size() << endl;

    // // 정렬 로직

    // for(int i : arr){
    //     cout << i << endl;
    // }
    // sort(arr.begin(), arr.end()); // 역순 정렬 sort(arr.rbegin(), arr.rend())
    // cout << endl;
    // for(int i : arr){
    //     cout << i << endl;
    // }

    /*
        vector: 동적 array
    */
    vector<int> v = {1, 2, 3};
    cout << v.size() << endl;

    for(auto &itr : v){
        cout << itr << endl;
    }

    cout << v[1] << endl;
    cout << v.at(1) << endl;

    v.resize(10);




    return 0;

}