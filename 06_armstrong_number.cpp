// armstrong number

#include <iostream>
#include <cmath>

using namespace std;

int getLength(int n)
{
    int c = 0;
    while (n > 0)
    {
        n /= 10;
        c++;
    }
    return c;
}

bool solve(int n)
{
    int c = getLength(n);

    if (c == 1)
        return true;

    int m = n;
    int res = 0;
    while (m > 0)
    {
        res += pow(m % 10, c);
        m /= 10;
    }

    if (res == n)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << solve(n) << endl; // boolalpha : print true/false instead of 1/0
    return 0;
}