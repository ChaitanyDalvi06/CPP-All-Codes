#include <iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0,count=0;
    cout<<"enter the number : ";
    cin>>n;
    sum+=n;

    while(n!=0)
    {
        cout<<"Enter the number : ";
        cin>>n;
        sum=sum+n;
        count = count +1;
        i++;
    }
    cout<<"sum is "<<sum<<endl;
    cout<<"total is "<<count<<endl;
    cout<<"average is "<<sum/count<<endl;
    
    return 0;
}
