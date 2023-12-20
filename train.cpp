#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"Enter the speed : ";
    cin>>speed;

    if(speed==120)
    {
        cout<<"dhere kar le bhai thuk jayega !!!! \n";
        cout<<speed-30<<endl;
    }
    else if(speed>=80 && speed<=120)
    {
        cout<<"fine theek hai \n";
        cout<<speed-20<<"\n";
    }
    else if(speed==80)
    {
        cout<<"ok";
    }
    return 0;
}