#include <iostream>

using namespace std;

int main() {
    int x = 0,y = 0;
    unsigned int rows = 0;
    cin >> rows;
    for (x = 1; x <= rows; ++x) {
        for (y = x; y <= rows; ++y) {
            cout << " ";
        }

        for (y = 1; y <= ((2*x)-1); ++y) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}