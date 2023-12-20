#include <iostream>
using namespace std;
int main()
{
    int n,max,i;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[n];

    for(i=0 ; i<n ;i++ )
    {
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }
    max=arr[0];
    int j = 0;
    while(j<n)
    {
       if(arr[j]>max)
       {
            max=arr[j];
        
       }
       j++;
    }
    cout<<max<<endl;
}