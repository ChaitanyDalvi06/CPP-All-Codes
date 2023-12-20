#include <iostream>
using namespace std;
int main()
{
    double n1, n2, eql;
    char op;

    cout << "Enter the number 1 : ";
    cin >> n1;
    cout << "Enter the number 2 : ";
    cin >> n2;
    cout << "Enter the operation ( + , - , * , / ) : ";
    cin >> op;

    if (op == '+')
    {
        cout << n1 + n2 << endl;
    }
    else if (op == '-')
    {
        cout << n1 - n2 << endl;
    }
    else if (op == '*')
    {
        cout << n1 * n2 << endl;
    }
    else if (op == '/')
    {
        cout << n1 / n2 << endl;
    }
    return 0;
}