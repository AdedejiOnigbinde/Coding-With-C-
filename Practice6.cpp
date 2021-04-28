//for loop c++ 2
#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, count;
	cout << "enter beggining number" << endl;
	cin >> n1;
	cout << "enter second number" << endl;
	cin >> n2;
	cout << "enter multiplying number" << endl;
	cin >> n3;

	for (count = n1 * n2; count <= n2 * n3)
	{

		cout << count << count << endl
			 << endl
			 << endl;
	}
	return 0;
}
