#include <iostream>
using namespace std;
void calculator(int a,int b)
{
    cout<<a+b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Enter the number : ";
    cin>>b;
    calculator(a,b);
    return 0;
}