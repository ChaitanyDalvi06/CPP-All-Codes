#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the amount : ";
    cin>>n;

    if(n<=10000)
    {
        cout<<"You will get 5% discount "<<endl;
        cout<<"Discount on your product "<<n*0.05<<endl;
    }
    else if((n>=10000) && (n<=25000) )
    {
        cout<<"You will get 14% discount "<<endl;
        cout<<"Discount on your product "<<n*0.14<<endl;
    }
    else if((n>=25000)&& (n<=50000))
    {
        cout<<"You wil get 16% discount "<<endl;
        cout<<"Discount on your product "<<n*0.16<<endl;
    }
    else if((n>=50000)&& (n<=100000))
    {
        cout<<"You will get 20% discount "<<endl;
        cout<<"Discount on your product "<<n*0.20<<endl;
    }
    return 0;
}