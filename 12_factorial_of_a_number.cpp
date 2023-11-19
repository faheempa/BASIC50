
#include <iostream>
using namespace std;

// solution 1 : recursion
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

// solution 2 : iteration
int fact2(int n)
{
    int res{1};
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    // cout << fact2(n) << endl;
    return 0;
}
