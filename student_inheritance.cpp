#include <iostream>
using namespace std;
// Base class
class Btech
{
public:
    string name, subject, DOB, documents;
    double marks;
    void setName(string n)
    {
        name = n;
    }
    void setSubject(string s)
    {
        subject = s;
    }
    void setDOB(string d)
    {
        subject = d;
    }
    void setDocument(string D)
    {
        subject = D;
    }
};
//derived class
class Info:public Btech
{
        
};