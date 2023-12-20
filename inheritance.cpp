#include<iostream>
using namespace std;
//base class
class Shape
{
    public:
    int width ; int height;
    void setWidth(int W)
    {width=W;}
    void setHeight(int h)
    {height=h;}
};
//derived class
class Rectangle:public Shape
{
    public:
    int getArea()
    {return(width*height);}
};
int main()
{
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    
    //print the area of the object

    cout<<"total area"<<rect.getArea()<<endl;
    return 0;
}
