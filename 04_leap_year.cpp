// leap year

#include <iostream>
using namespace std;

// solution 1 : readable solution
bool isLeap(int y)
{
    if (y % 4 == 0)
    {
        if (y % 100 != 0)
            return true;
        else
        {
            if (y % 400 == 0)
                return true;
            else
                return false;
        }
    }
    else
        return false;
}

// solution 2 : one line solution
bool isLeap2(int y)
{
    return (y % 4 == 0) and ((y % 100 != 0) or (y % 100 == 0 and y % 400 == 0));
}

int main()
{
    int y;
    cin >> y;
    cout << boolalpha; // print true or false instead of 1 or 0
    cout << isLeap(y) << endl;
    return 0;
}