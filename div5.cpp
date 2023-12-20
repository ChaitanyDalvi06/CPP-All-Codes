#include <iostream>
using namespace std;
int main()
{
    int range, sum = 0;
    cout << "Enter the number : ";
    cin >> range;
    for (int i = 3; i <= range; i++)
    {
        if (range % 3 == 0 || range % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}
