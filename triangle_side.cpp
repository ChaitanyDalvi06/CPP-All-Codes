#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "Enter the size of side 1 : ";
    cin >> s1;
    cout << "Enter the size of side 2 : ";
    cin >> s2;
    cout << "Enter the size of side 3 : ";
    cin >> s3;
    if ((s1 == s2) && (s2 == s3))
    {
        cout << "The triangle is equilateral traingle " << endl;
    }
    else if ((s1 == s2) || (s3 == s1) || (s3 == s2))
    {
        cout << "The traingle is isosceles " << endl;
    }
    else
    {
        cout << "The traingle is scalene " << endl;
    }
    return 0;
}