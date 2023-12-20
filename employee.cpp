#include <iostream>
using namespace std;
class Employee
{
private:
    string name, ID;
    int salary;

public:
    int Salary, money;
    void AddData()
    {
        cout << "Enter the Name of Employee : ";
        getline(cin, name);
        cout << "Enter the Employee ID : ";
        getline(cin, ID);
        cout << "Enter the salary : ";
        cin >> Salary;
    }
};
class Manager : public Employee
{
public:
    int Salary;
    int Sal()
    {
        cout << "Salary of Manager is " << Salary << " And the bonus is $5000 .";
        return Salary;
    }
};
class Worker : public Employee
{
public:
    int Salary; 
    int money()
    {
        cout << "Salary of employee is " << Salary << " on Hourly basis . ";
        return Salary;
    }
};
int main()
{
    string name;
    string ID;
    int Salary;
    Employee emp;
    emp.AddData();
  
    if (Salary >= 100000)
    {
        cout << emp.Salary << endl;
    }
    else if (Salary <= 100000 && Salary >= 10000)
    {
        cout << emp.money << endl;
    }
    return 0;
}
