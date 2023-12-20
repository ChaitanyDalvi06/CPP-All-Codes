#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : ";
    cin>>number;
    while (number!=12345)
    {
        cout << "wrong number !!!!!" << endl;
        cout << "enter the secret number again : ";
        cin >> number;
    }
    if(number==12345)
    {
        cout<<"You guess correct number !!!";
    }
    return 0;
}
