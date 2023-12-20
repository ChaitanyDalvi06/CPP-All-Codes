#include <iostream>
using namespace std;
int main()
{
    string n,reverse;
    cout<<"Enter the name : ";
    getline(cin,n);

    int i=n.length();
    while(i>=0)
    {
        reverse+=n[i];
        i--;
    }
    cout<<reverse<<endl;;
    return 0;
}