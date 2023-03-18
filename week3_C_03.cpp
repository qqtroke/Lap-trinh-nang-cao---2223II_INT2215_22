#include <iostream>
using namespace std;

int main() {
     int n = 0, A, B, digit, rev, count = 0;

     cin >> A >> B;

    for (int i = A; i <= B; i++) {
        n = i;
        digit = 0;
        rev = 0;
     while (i != 0) {
         digit = i % 10;
         rev = (rev * 10) + digit;
         i = i / 10;
     }

     if (n == rev) {
         count = count + 1;
     }
}
cout << count;
    return 0;
}
