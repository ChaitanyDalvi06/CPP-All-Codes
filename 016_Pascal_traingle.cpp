//Implement a program to print a Pascal's triangle using nested loops.

#include <iostream>
using namespace std;
int main()
{
    int numRows;
    cout << "Enter the number of Rows for pascal triangle :";
    cin >> numRows;
    for (int i = 0; i < numRows; ++i)
    {
        int one = 1;
        for (int space = 1; space <= numRows - i ; ++space)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; ++j)
        {
            cout << one << "    ";
            one = one * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}