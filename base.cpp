#include <iostream>
using namespace std;
int main()
{
    int base, exponent;
    cout << "Enter the base value :";
    cin >> base;
    cout << "Enter the exponent value :";
    cin >> exponent;

    int result = 1;
    for (int i = 0; i < exponent; i++) 
    {
        result *= base; // result=result*base
    }
    cout << base << " raised to the power " << exponent << " is = " << result << endl;
    return 0;
}