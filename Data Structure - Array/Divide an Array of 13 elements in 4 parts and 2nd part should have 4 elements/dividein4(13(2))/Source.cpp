#include <iostream>
using namespace std;

int main() {
	const int n = 13;
	int a[n] = { 2,6,8,12,15,20,26,29,35,39,44,29,55 }, b[3], c[4], d[3], e[3];

	//Printing the given array
	cout << "Given array elements are: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	int bCount = 0, cCount = 0, dCount = 0, eCount = 0;

	//part no 1:
	cout << "Part No 1: " << endl;
	for (int i = 0; i <= n / 4; i++) {
		b[bCount] = a[i];
		cout << b[bCount] << " ";
		bCount++;
	}
	cout << endl;

	//part no 2:
	cout << "Part No 2: " << endl;
	for (int i = n / 4; i <= 2 * n / 4; i++) {
		c[cCount] = a[i];
		cout << c[cCount] << " ";
		cCount++;
	}
	cout << endl;

	//part no 3:
	cout << "Part No 3: " << endl;
	for (int i = (2 * n / 4) + 1; i <= 3 * n / 4; i++) {
		d[dCount] = a[i];
		cout << d[dCount] << " ";
		dCount++;
	}
	cout << endl;

	//part no 4:
	cout << "Part No 4: " << endl;
	for (int i = (3 * n / 4) + 1; i < n; i++) {
		e[eCount] = a[i];
		cout << e[eCount] << " ";
		eCount++;
	}
	cout << endl;

	system("pause");
	return 0;
}