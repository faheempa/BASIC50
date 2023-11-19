// Simple calculator

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b;
    char o;
    cin >> a >> o >> b;

    cout << fixed << setprecision(1); // set precision to 1 decimal place in output
    if (o == '+')
        cout << a + b << endl;
    else if (o == '-')
        cout << a - b << endl;
    else if (o == '*')
        cout << a * b << endl;
    else if (o == '/')
        cout << a / b << endl;
    else
        cout << "invalid" << endl;

    return 0;
}