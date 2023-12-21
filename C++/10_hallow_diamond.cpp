// hallow diamond

#include <iostream>
using namespace std;

void printHollowDiamond(int n)
{
    // upper half
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n - i; j++)
            cout << " ";

        cout << "*";

        for (int j = 0; j < (i - 1) + (i - 2); j++)
            cout << " ";

        if (i > 1)
            cout << "*";

        cout << endl;
    }
    // lower half
    for (int i = n - 1; i > 0; i--)
    {

        for (int j = 0; j < n - i; j++)
            cout << " ";

        cout << "*";

        for (int j = 0; j < (i - 1) + (i - 2); j++)
            cout << " ";

        if (i > 1)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    printHollowDiamond(n);

    return 0;
}