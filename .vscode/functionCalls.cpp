#include <iostream>
using namespace std;

long factorial(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    long number;
    cout << "Welcome Please enter a number\n";
    cin >> number;
    long z = factorial(number);
    cout << "Factorial Number: " << number << " is " << z;
    return 0;
}