#include <iostream>
using namespace std;
int main()
{
    string n,reverse;
    cout<<"Enter the number : ";
    cin>>n;
    
    for (int i = n .length()-1 ; i>=0; i--)
    {
        reverse+=n[i];
    }
    cout<<"the reverse number is "<<reverse<<endl;
    return 0;
}