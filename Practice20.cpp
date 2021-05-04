#include <iostream>
#include <string>
using namespace std;
//18/19 question 5ii
class Employee
{
    string firstName, lastName;
    int monthlySalary;

public:
    Employee(string fn, string ln, int ms)
    {
        firstName = fn;
        lastName = ln;
        if (ms <= 0)
        {
            monthlySalary = 0;
        }
        else
        {
            monthlySalary = ms;
        }
    }
   ~ Employee();
    void setFirstName(string first)
    {
        first = firstName;
    }
    void setLasttName(string last)
    {
        last = lastName;
    }
    void setMonthlySalary(int salary)
    {
        if (salary <= 0)
        {
            monthlySalary = 0;
        }
        else
        {
            salary = monthlySalary;
        }
    }

    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    int getMonthlySalary()
    {
        return monthlySalary;
    }
};

int main()
{
    Employee em1;
    Employee em2;
    em1.setFirstName("Craig");
    em1.setLasttName("Anderson");
    em1.setMonthlySalary(2000000);
    cout << "First Name: " << em1.getFirstName() << endl;
    cout << "Last Name: " << em1.getLastName() << endl;
    cout << "Monthly Salary: " << em1.getMonthlySalary() << endl;

    em2.setFirstName("George");
    em2.setLasttName("Mchaul");
    em2.setMonthlySalary(1000000);
    cout << "First Name: " << em2.getFirstName() << endl;
    cout << "Last Name: " << em2.getLastName() << endl;
    cout << "Monthly Salary: " << em2.getMonthlySalary() << endl;
}