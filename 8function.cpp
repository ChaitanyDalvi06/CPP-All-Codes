// leap year
#include <iostream>
using namespace std;
int year(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 != 0))
    {
        cout << "Its is leap year " << endl;
    }
    else
    {
        cout << "Its not a leap year " << endl;
    }
    return 0;
}
int main()
{
    int y;
    cout << "Enter the year : ";
    cin >> y;
    year(y);
    return 0;
}
