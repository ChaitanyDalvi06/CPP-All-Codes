#include <iostream>
using namespace std;
int main()
{
    int num;
    int flag;
    cout << "Enter the number : ";
    cin >> num;

    for (int i = 2; i <= num / 2; i++)
    {
        int flag = 0;

        for (int j = 2; j <= i / 2; j++)
        {
            if (j%i== 0)
            {
                flag = flag + 1;
            }
        }
    }
    if (flag == 1)
    {
        cout << num << " is not prime ";
    }
    else if (flag == 0)
    {
        cout << num << " is prime ";
    }
    return 0;
}