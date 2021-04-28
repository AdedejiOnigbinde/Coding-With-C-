//
#include <iostream>
using namespace std;
int main(void)
{
	int score[5];
	int i, j;
	int sum;
	sum = 0;
	float average;

	for (i = 0; i <= 4; i++)
	{
		cout << "Input your score ";
		cin >> score[i];
		cout << endl;
	}
	for (j = 0; j <= 4; j++)
	{
		cout << j + 1 << "." << score[j] << endl;
		sum = sum + score[j];
	}
	cout << "Total sum is " << sum << endl;

	average = sum / 5;
	cout << "The average is " << average << endl;
	return 0;
}
