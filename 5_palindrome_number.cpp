// palindrome number

#include <iostream>
using namespace std;

bool solve(int n)
{
    n = abs(n);
    int rev = 0, temp = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == temp;
}

int main()
{
    int n;
    cin >> n;
    cout << boolalpha << solve(n); // boolalpha : print true/false instead of 1/0
    return 0;
}
