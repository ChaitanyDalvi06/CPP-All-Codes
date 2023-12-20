#include <iostream>
#include <string>
using namespace std;
string reverse(string b)
{
    string reverse;
    for (int i = b.length() - 1; i >= 0; i--)
    {
        reverse += b[i];
    }
    cout << reverse;
    return reverse;
}
int main()
{
    string b;
    cout << "Enter the name : ";
    cin >> b;
    reverse(b);
    return 0;
}