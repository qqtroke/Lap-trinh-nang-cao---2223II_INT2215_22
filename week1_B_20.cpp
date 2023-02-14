#include <iostream>
using namespace std;

bool divisibility (int a, int b)
{
    if (a != 0 && b != 0) {
        if ((a % 7 == 0) && (b % 7 == 0)) {
            return true;
        }
    }

    return false;
}

int main()
{
    int a, b;
    cin >> a >> b;

    divisibility (a, b) ? cout << "True":
                      cout << "False";
    return 0;
}
