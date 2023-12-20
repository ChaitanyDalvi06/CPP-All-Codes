#include <iostream>
using namespace std;
int main()
{
    int n,flag=0,i=2,j=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(i<n/2)
    {
        if(i%n==0)
        {
            flag++;
        }
        i++;
    }
     if(flag>0)
        {
            cout<<"Its not a prime number ";
            
        }
        else if(flag==0) 
        {
            cout<<"Its a prime number ";
        }
        return 0;
}