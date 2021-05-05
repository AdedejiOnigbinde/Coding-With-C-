#include <iostream>
#include <conio.h>
using namespace std;
//16/17 Type 1 question 6

class tollBooth
{
private:
    unsigned int carTotal;
    double cashTotal;

public:
    tollBooth();
    ~tollBooth();

    void payingCar();
    void nopayCar();
    void display() const;
};

tollBooth::tollBooth()
{
    this->carTotal = 0;
    this->cashTotal = 0;
}

tollBooth::~tollBooth() {}

void tollBooth::payingCar()
{
    carTotal += 1;
    cashTotal += 0.5;
}

void tollBooth::nopayCar()
{
    carTotal += 1;
}

void tollBooth::display() const
{
    cout << "Number of cars passed by: " << carTotal << "\nCash collected: $" << cashTotal << endl;
}

int main()
{
    const int esc = 27;
    const int enter = 13;
    const int tab = 9;
    int key = 0;
    tollBooth mainBridge;
    while (key != esc)
    {

        cout << "Press Enter For Paying Car And Tab For Non Paying Car" << endl
             << "Or Press ESC TO Quit" << endl;
        key = getche();
        if (key == enter)
        {
            mainBridge.payingCar();
        }
        else if (key == tab)
        {
            mainBridge.nopayCar();

        }
    }

    mainBridge.display();

    return 0;
}