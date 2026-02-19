#include <iostream>

using namespace std;

namespace work1
{
    int a = 1;
}

namespace work2
{
    int a = 2;
}

int main(){
    cout << work1::a << endl;
    cout << work2::a << endl;

}