#include <iostream>
using namespace std;
int main()
{
    int range, counter = 0, sum = 0;
    cout << "Enter the number : ";
    cin >> range;
    for (int i = 2; i <= range; i++)
    {
        counter = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
    }
    if (counter == 0)
    {
        sum += i;
    }
    cout << sum;
}