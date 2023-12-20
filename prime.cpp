#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The number is not prime number ";
    }
    else if ((n == 1) || (n == 0))
    {
        cout << "the number is not prime nor composite ";
    }
    else if (n == 2)
    {
        cout << "the number is prime ";
    }
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0) 
        {
            cout << "The number is prime ";
        }
    }
    return 0;
}