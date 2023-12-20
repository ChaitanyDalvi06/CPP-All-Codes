#include <iostream>
using namespace std;
int main()
{
    int i, j, counter;
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = 2; j <= i / 2; j++)
        {
            counter = 0;
            if (i % j == 0)
            {
                counter = counter + 1;
            }
        }
        if (counter == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}