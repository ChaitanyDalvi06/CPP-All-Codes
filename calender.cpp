#include <iostream>
using namespace std;
int main()
{
    string month;
    int date;
    cout << "Enter the month : ";
    cin >> month;
    cout << "Enter the day : ";
    cin >> day;

    for (int i = 1; i <31; i++)
    {
         if (month == "january", "march", "may", "july", "August", "october ", "december")
         {
            cout<<day+i;
         }
    }
}