//program for sum of scores
#include <iostream>
using namespace std;
int main()
{
	int score, opt, n, grade;
	int sum = 0;
	int mult = 0;
	cout << "enter the number of scores you want to add or multiply" << endl;
	cin >> n;
	for (score = 1; score <= n; score++)
	{
		cout << "enter scores" << endl;
		cin >> grade;
	}

	cout << "do you want to add or multiply score" << endl;
	cout << "enter 1 to add and 2 to multiply" << endl;
	cin >> opt;

	if (opt == 1)
	{
		sum = sum + grade;
		cout << "the sum of the numbers are" << sum << endl;
	}
	else if (opt == 2)
	{
		mult = grade * mult;
		cout << "the product of the numbers are" << mult << endl;
	}
	return 0;
}
