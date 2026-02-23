#include <iostream>
#include <cstdlib> // std::randn()
#include <ctime>
#include <random>

using namespace std;

int getRandomNumber(int min, int max){
    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

int main(){
    // //srand(5323); //랜덤 시드 설정
    // srand(static_cast<unsigned int>(time(0))); // 시간에 따라 시드가 바뀜

    // for(int i=0; i<10; i++){
    //     cout << rand() << endl;
    // }

    cout << getRandomNumber(1, 9) << endl;


    random_device rd;
    mt19937 mesenne(rd());
    uniform_int_distribution<> dice(1, 6);

    for(int i=0; i<10; i++){
        

        cout << dice(mesenne) << endl;
    } 

    return 0;
}