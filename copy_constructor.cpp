#include <iostream>
using namespace std;
class wall
{
private:
    double length;
    double height;

public:
    wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    wall(wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    double calculate_area()
    {
        return length * height;
    }
};