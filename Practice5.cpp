#include <iostream>
using namespace std;
int main()
{
	int r;
	cout << "enter the number" << endl;
	cin >> r;
	do
	{
		cout << r << endl;

	} while (r < 1 && r > 10);

	return 0;
}
