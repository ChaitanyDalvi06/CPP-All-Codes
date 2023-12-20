#include <iostream>
using namespace std;
int main()
{
    string password;
    cout << "Enter the password : ";
    getline(cin, password);
    while (password != "chaitanya")
    {
        cout << "wrong password !!!!!" << endl;
        cout << "enter the password again : ";
        cin >> password;
    }
    return 0;
}