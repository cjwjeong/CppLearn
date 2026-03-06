#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, e, f;
    int bound = 999;
    cin >> a >> b >> c >> d >> e >> f;

    for(int x=-bound; x<=bound; x++){
        for(int y=-bound; y<=bound; y++){
            if((a * x + b * y == c) && (d * x + e * y == f)){
                cout << x << " " << y << endl;
            }
        }
    }

    return 0;
}
