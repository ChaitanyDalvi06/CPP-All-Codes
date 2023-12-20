#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if ((n == 0) || (n == 1))
    {
        cout << "0 and 1 are not prime numbers";
        return 0;
    }
    if (n % 2 == 0)
    {
        cout << n << "The number is not prime";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime ";
            return 0;
        }
        else
        {
            cout << "Its a prime number";
            break;
        }
        // else if (i == n-1){
        //     cout<<"Prime";

        // }
    }
}