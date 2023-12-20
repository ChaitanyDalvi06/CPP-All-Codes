#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    int max=0;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"enter the elements : ";
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}