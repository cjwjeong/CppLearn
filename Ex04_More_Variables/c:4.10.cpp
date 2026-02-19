#include <iostream>
#include <string>

using namespace std;

struct Human
{
    double weight;
    double height;
    int age;
    string name;

    void printHuman(){
        cout << weight << " " << height << " " << age << " " << name << endl;
    }
};

int main(){
    Human human{2.0, 100.0, 20, "조상혁"};
    cout << human.name << endl;
    human.printHuman();

    return 0;
}
