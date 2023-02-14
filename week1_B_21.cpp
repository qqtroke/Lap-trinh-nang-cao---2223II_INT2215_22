#include <iostream>
#include<cmath>
using namespace std;

float triangleArea(float a, float b, float c)
{
    if (a < 0 || b < 0 || c < 0 || (a + b <= c) || a + c <= b ||b + c <= a)
    {
        exit(0);
    }

    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    cout << triangleArea(a, b, c);

    return 0;
}
