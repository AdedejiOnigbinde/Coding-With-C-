// prgoram to determine odd or even numbers
#include <iostream>
using namespace std;
int main()
{
	int num1;
	cout << "enter a number" << endl;
	cin >> num1;
	if (num1 % 2 == 0)
	{
		cout << "number is even";
	}
	else
	{
		cout << "number is odd";
	}
	return 0;
}
