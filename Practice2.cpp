#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Area
{
    double x, y;
    double z = 0.5;

public:
    Area(double, double);
    double rectangle()
    {
        double recArea = x * y;
        return recArea;
    }
    double square()
    {
        double sqrArea = 4 * x;
        return sqrArea;
    }
    double triangle()
    {
        double triArea = 0.5*(x * y);
        return triArea;
    }
};
Area::Area(double a, double b)
{
    x = a;
    y = b;
}
int main()
{
    double len, bre;
    string input;
    cout << "Enter Length:" << endl;
    cin >> len;
    getline(cin, input);
    stringstream(input) >> len;
    cout << "Enter Breadth:" << endl;
    cin >> bre;
    getline(cin, input);
    stringstream(input) >> bre;
    Area val(len, bre);
    cout << "Rectangle Area is: " << val.rectangle() << endl;
    cout << "Square Area is: " << val.square() << endl;
    cout << "Triangle Area is: " << val.triangle() << endl;
    return 0;
}