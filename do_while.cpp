#include <iostream>
using namespace std;
int main()
{
    float n;
    do{
        cout<<"enter the number (0 to 100):";
        cin>>n;
        cout<<"you entered:"<<n<<endl;
    }
    while(n!=0);
    cout<<"you had exited the loop";
    return 0;
}