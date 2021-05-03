#include <iostream>
#include <string>
using namespace std;

class Shapes
{

public:
    Shapes(int len, int wid, int rad)
    {
        len = length;
        wid = width;
        rad = radius;
    };
    int length, width, radius;
    const double PI = 3.14;
};
class Triangle : Shapes
{
public:
    double getArea()
    {
        double area = 0.5 * (length * width);
        return area;
    }
};

class Rectangle : Shapes
{
    double getArea()
    {
        double area = length * width;
        return area;
    }
};

class Circle : Shapes
{
    double getArea()
    {
        double area = PI * (radius ^ 2);
        return area;
    }
};

class Square : Shapes
{
    double getArea()
    {
        double area = length ^ 4;
        return area;
    }
};

int main()
{
Shapes sha(); 

    return 0;
}