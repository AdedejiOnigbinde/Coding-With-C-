#include <iostream>
#include <string>
using namespace std;

class Pensioners
{
    string firstName;
    string lastName;
    double lastSalary;
    int retirementLevel;

public:
    Pensioners(string, string, double, int);
    void getDetails()
    {
        cout << "Full Name: " << firstName << " " << lastName << " Retirement Level: " << retirementLevel << endl;
    }
    double retirementSalary()
    {
        double finalSalary;
        if (retirementLevel >= 1 && retirementLevel <= 5)
        {
            finalSalary = lastSalary * 0.5;
            return finalSalary;
        }
        else if (retirementLevel >= 6 && retirementLevel <= 10)
        {
            finalSalary = lastSalary * 0.6;
            return finalSalary;
        }
        else if (retirementLevel > 10)
        {
            finalSalary = lastSalary * 1;
            return finalSalary;
        }
    }
};

Pensioners::Pensioners(string fn, string ln, double ls, int rl)
{
    firstName = fn;
    lastName = ln;
    lastSalary = ls;
    retirementLevel = rl;
};

int main()
{
    Pensioners pens("John", "Camry", 15000, 7);
    pens.getDetails();
    cout << "Pension Salary: " << pens.retirementSalary() << endl;
    return 0;
}