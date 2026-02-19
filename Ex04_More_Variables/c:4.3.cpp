#include <iostream>

namespace a{
    int my_var(10);
}

namespace b{
    int my_var(1);
}

namespace c{
    int num(1);
}


int main(){
    using namespace std;
    using namespace a;
    using namespace b;


    cout << a::my_var << endl;
    cout << b::my_var << endl;

    {
        using namespace c;
        cout << num << endl;
    }

}