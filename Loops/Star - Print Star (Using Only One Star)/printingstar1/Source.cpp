#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 25; i++) {
		cout << "*";
		if (i % 5 == 0)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;
}