#include <iostream>
#include<math.h>

using namespace std;

int main() {
    int x, y;
    double distance = 0;

    cin >> x >> y;

    distance = sqrt(x*x + y*y);

    cout << distance;

    return 0;
}
