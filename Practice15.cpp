//
#include <iostream>
using namespace std;
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
float division(int num1, int num2);
int main(void)
{
	int num1, num2;
	cout << "addition is" << addition(num1, num2);
	cout << "subtraction is" << subtraction(num1, num2);
	cout << "multiplication is" << multiplication(num1, num2);
	cout << "division is" << division(num1, num2);
}
{
	int sum;
	cout << "Input the two integers ";
	cin >> num1 >> num2;
	sum = num1 + num2;
	return sum;
}
{
	int sub;
	cout << "Input the two integers ";
	cin >> num1 >> num2;
	sub = num1 - num2;
	return sub;
}
{
	int multi;
	cout << "Input the two integers ";
	cin >> num1 >> num2;
	multi = num1 * num2;
	return multi;
}
{
	int div;
	cout << "Input the two integers ";
	cin >> num1 >> num2;
	div = num1 / num2;
	return div;
}
