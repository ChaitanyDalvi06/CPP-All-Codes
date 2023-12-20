#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the starting number :";
    cin>>n;
    while (n>0)
    {
        cout<<n<<",";
        --n;
    }
    cout<<"FINISH!";
    return 0;
}