// Minimum and maximum of three numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max, min;
    // get min
    if (a < b && a < c)
        min = a;
    else if (b < a && b < c)
        min = b;
    else
        min = c;
    // get max
    if (a > b && a > c)
        max = a;
    else if (b > a && b > c)
        max = b;
    else
        max = c;

    cout << min << " " << max << endl;

    return 0;
}