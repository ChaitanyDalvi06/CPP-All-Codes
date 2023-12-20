#include <iostream>
using namespace std;
class Employee
{
private:
    int salary;

public:
    Employee()
    {
        cout << "Default constructor is called : ";
        salary = 50000;
        cout << salary;
        cout << endl;
    }

    Employee(int S)
    {
        cout << "parameterzed constructor is called : ";
        salary = S;
        cout << salary;
        cout<<endl;
    }
    Employee(Employee&obj)
    {
        cout << "copy constructor is called : ";
        salary = obj.salary;
        cout << salary;
    }
    ~Employee()
    {
        cout<<"destructor is called ";
        cout<<endl;
    }
};
int main()
{
    Employee E1, E2(60000),E3=E2;
    cout << endl;
    return 0;
}

