//factorial
#include <iostream>
using namespace std;
int main()
{
    int n,factorial=1,i = 1;
    cout<<"Enter the number : ";
    cin>>n;

    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    cout<<factorial<<endl;

}