#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter the speed ( in KMPH): ";
    cin >> speed;

    if (speed < 80)
    {
        cout << "This is a Local train "<<endl;
    }
    else if (speed >= 80 && speed <= 120)
    {
        cout << "This is an Express train "<<endl;
    }
    else if (speed >= 121 && speed <= 200)
    {
        cout << "This is a Superfast train "<<endl;
    }
    else if (speed > 200)
    {
        cout << "This is a Bullet train "<<endl;
    }
    return 0;
}