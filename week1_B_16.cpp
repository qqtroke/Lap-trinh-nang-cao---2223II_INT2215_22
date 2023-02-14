#include <iostream>
using namespace std;

bool checkInteger(int a, int b, int c)
{
    if ((a == b) && (b == c)) {
        return true;
    }
    return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >>c;

    checkInteger(a, b, c) ? cout << "True":
                      cout << "False";
    return 0;
}
