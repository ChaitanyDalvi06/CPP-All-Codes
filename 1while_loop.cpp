// print name infinite time
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter the name : ";
    getline(cin,name);
    while (true)
    {
        cout << name;
    }
    return 0;
}
