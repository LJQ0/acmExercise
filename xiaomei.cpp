#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int radius = ceil(sqrt(pow(x, 2) + pow(y, 2)));
    if (radius == 0) {
        cout << 10;
    }
    else if (radius > 0 && radius <= 10) {
        cout << 11 - radius;
    }
    else {
        cout << 0;
    }
    return 0;
}