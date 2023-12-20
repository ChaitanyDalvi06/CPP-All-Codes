#include <iostream>
using namespace std;
int factorial(int num)
{
    if(num>0)
    {
        return num*factorial(num-1);
    }
    else return 1;
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<num<<" ! = "<<factorial(num)<<endl;
    return 0;
}