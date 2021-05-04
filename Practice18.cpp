#include <iostream>
using namespace std;
//18/19 question 3ii
class father
{
public:
    father();
    int age = 45;
    double height = 5.6;
    void shout()
    {
        cout << "I am an extrovert" << endl;
    }
};
class son1 : father
{
public:
    int age = 23;
    double height = 6.0;
};

class son2 : father
{
    int age = 20;
    double height = 5.3;
};
int main()
{
    son1 s1;
    son2 s2;
    s1.shout();
    s2.shout();
}