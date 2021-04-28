//for loop 1-10
#include <iostream>
using namespace std;
int main()
{
    int count, n1, n2;
    cout << "enter beggining number" << endl;
    cin >> n1;
    cout << "enter ending number" << endl;
    cin >> n2;

    for (count = n1; count <= n2; count++)
    {
        cout << count << endl
             << endl;
    }
    return 0;
}
