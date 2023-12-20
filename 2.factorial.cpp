#include <iostream>
using namespace std;
int main()
{
    int n,factorial=1;
    cout<<"Enter the number  : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        factorial=factorial*i;
    }
    if(n<0)
    {
        cout<<"invalid!! Number should be positive "<<endl;
        return 1;
    }
    cout<<factorial<<endl;
    return 0;
}