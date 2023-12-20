#include<iostream>
using namespace std;
//Base class
class Shape
{
    public:
    int width, height;
    int base ;
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
    void setbase(int b)
    {
        base=b;
    }
};
//Derived Class
class Rectangle:public Shape
{
    public:
    int getArea()
    {
        return (width*height);
    }
};
class triangle:public Shape
{
    public:

    int getArea()
    {
        return (1/2*base*height);
    }
};
//main function
int main()
{
    Rectangle Rect,Tri;
    Rect.setwidth(5);
    Rect.setheight(7);
    Tri.setheight(5);
    Tri.setbase(10);
    //Print the area of the object
    cout<<"Total Area of Rectangle :- "<<Rect.getArea()<<endl;
    cout<<"Total area of triangle :- "<<Tri.getArea()<<endl;
 return 0;
}
