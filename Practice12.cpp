#include <iostream>
using namespace std;
int foo[] = {16, 2, 77, 40, 12};

int main()
{
	int result = 0;
	for (int n = 0; n < 5; n++)
	{
		result = result + foo[n];
	}
	cout << result;
	return 0;
}
