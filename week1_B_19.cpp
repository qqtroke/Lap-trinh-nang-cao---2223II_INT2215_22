#include <iostream>
using namespace std;

bool ordered(int a, int b, int c)
{
    if ((a > b) && (b > c)) {
        return true;
    }

    if ((a < b) && (b < c)) {
        return true;
    }
    return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >>c;

    ordered(a, b, c) ? cout << "True":
                      cout << "False";
    return 0;
}
