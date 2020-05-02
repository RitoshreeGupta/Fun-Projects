#include <iostream>
using namespace std;

int main() {
	const int n = 9, n2 = 3;
	int a[n] = { 2,6,8,12,15,20,26,29,35 }, b[n2], c[n2], d[n2];

	//Printing the given array
	cout << "Given array elements are: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	int bCount = 0, cCount = 0, dCount = 0;

	//part no 1:
	cout << "Part No 1: " << endl;
	for (int i = 0; i < n / 3; i++) {
		b[bCount] = a[i];
		cout << b[bCount] << " ";
		bCount++;
	}
	cout << endl;

	//part no 2:
	cout << "Part No 2: " << endl;
	for (int i = n/3; i < (2*n/3); i++) {
		c[cCount] = a[i];
		cout << c[cCount] << " ";
		cCount++;
	}
	cout << endl;

	//part no 3:
	cout << "Part No 3: " << endl;
	for (int i = 2*n / 3; i <n; i++) {
		d[dCount] = a[i];
		cout << d[dCount] << " ";
		dCount++;
	}
	cout << endl;

	system("pause");
	return 0;
}