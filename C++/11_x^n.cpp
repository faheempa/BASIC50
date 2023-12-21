#include <iostream>
using namespace std;

// solution 1 : recursion
int xToPowerOfN(int x, int n)
{
    if (x == 1 or n == 0)
        return 1;
    return x * xToPowerOfN(x, n - 1);
}

// solution 2 : iteration
int xToPowerOfN2(int x, int n)
{
    if (x == 1 or n == 0)
        return 1;
    int res{1};
    while (n > 0)
    {
        res = res * x;
        n--;
    }
    return res;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << xToPowerOfN(x, n) << endl;
    // cout << xToPowerOfN2(x, n) << endl;
    return 0;
}