#include <iostream>
using namespace std;

int prime(int n)
{
   int counter = 0;
   for (int i = 2; i <=n/2; i++)
   {
        if (n%i==0)
        {
           counter = 1;
           return counter;

        }
     
    }
    return counter;
  
}

int main()
{
    int a;
    cout<<"enter the no. : ";
    cin>>a;

    
    if (prime(a)==1)
    {
        cout<<" not prime";
    }
    else
    {
        cout<<" prime";
    }
    
  return 0;  
}