// Write a program to find the sum of all numbers from 1 to N using a loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the digit : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Number should be positive";
    }
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
}