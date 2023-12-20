#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    void setData(int r, string n)
    {
        roll = r;
        name = n;
    }
    void getData()
    {
        cout << roll;
        cout << name;
    }
};
int main()
{
    Student s1, s2;
    s1.setData(1, " chaitanya");
    s1.getData();
    cout << endl;
    s2.setData(2, " karunesh");
    s2.getData();
    return 0;
}