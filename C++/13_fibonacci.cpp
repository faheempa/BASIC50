#include <iostream>
using namespace std;

// solution 1 : recursion
int fibon(int n)
{
    if (n == 0 or n == 1)
        return n;
    return fibon(n - 1) + fibon(n - 2);
}

// solution 2 : iteration
int fibon2(int n)
{
    int a = 0, b = 1, c;
    while (n--)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << fibon(n) << endl;
    // cout << fibon2(n) << endl;
    return 0;
}
