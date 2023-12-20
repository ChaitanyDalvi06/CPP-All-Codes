#include <iostream>
using namespace std;
int main()
{
    int f=0,s=1,next,n,i=1;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"series is : "<<endl;
    cout<<f<<endl;
    cout<<s<<endl;
    while(i<n)
    {
        next=f+s;
        f=s;
        s=next;
        cout<<next<<endl;
        i++;
    }
    
}