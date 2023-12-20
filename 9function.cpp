// power
#include <iostream>
using namespace std;
int power(int n, int p)
{
    // int result = 1;
    // for (int i = 1; i <= p; i++)
    // {
    //     result = result * n;
    // }
    // cout << result << endl;

    int result = 1;
    while (p != 0)
    {
        result *=n;
        p--;
    }
     cout << result<<endl;
    return 0;
}
int main()
{
    int n, p;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter power : ";
    cin >> p;

    power(n, p);
    return 0;
}
