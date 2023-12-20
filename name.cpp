#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the Name : ";
    cin>>name;

    for(int i=1 ; i<=100 ; i++)
    {
        cout<<i<<". " <<name<<endl;
    }
    
    return 0;
}