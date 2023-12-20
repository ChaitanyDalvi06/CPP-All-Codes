#include <iostream>
using namespace std;
int main()
{
    double n;
    cout<<"Ennter the number : ";
    cin>>n;
    
    if(n<0)
    {
        cout<<"the number is negative ";
    }
    else if(n>0)
    {
        cout<<"The number is positive ";
    }
    else if(n==0)
    {
        cout<<"Number is zero ";
    }
    return 0;
}