// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int fact=1;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1 ; i<=n ; i++)
//     {
//         fact = fact*i;
//     }
//     cout << fact<<endl;
//     return 0;
// }
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
    cout<<factorial<<endl;

}