#include <iostream>
#include <string>
#include <sstream>
using namespace std;

float priceValue(float& price, int& value)
{
    float totalCost = price * value;
    return totalCost;
}

int main()
{
    string input;
    float pri;
    int val;
    cout << "Enter The Price" << endl;
    getline(cin, input);
    stringstream(input) >> pri;
    cout << "Enter The value" << endl;
    getline(cin, input);
    stringstream(input) >> val;
    cout << "The Total Cost Is " << priceValue(pri,val);
    return 0;
}
