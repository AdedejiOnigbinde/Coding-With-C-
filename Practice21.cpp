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
    int key = 0;
    tollBooth mainBridge;
    while (key != esc)
    {
        mainBridge.payingCar();
        mainBridge.nopayCar();
        cout<<"Press Enter To Continue Reading"<<endl<<"Or Press ESC TO Quit"<<endl;
        key = getche();
    }

    mainBridge.display();

    return 0;
}