#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    int min=arr[0];
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter the elements : ";
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}