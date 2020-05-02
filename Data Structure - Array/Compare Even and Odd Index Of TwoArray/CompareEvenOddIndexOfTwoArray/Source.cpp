#include <iostream>
using namespace std;

int main() {

	const int n = 6;
	int a[n], b[n], value, flag = 0;

	//1st array input
	for (int i = 0; i < n; i++) {
		cout << "Please enter a value: ";
		cin >> value;
		a[i] = value;
	}

	//print 1st array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	//2nd array input
	for (int i = 0; i < n; i++) {
		cout << "Please enter a value: ";
		cin >> value;
		b[i] = value;
	}

	//print 2nd array
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	//condition for even odd

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			a[i] != b[i + 1];
			flag = 0;
		}
		else if (i % 2 == 1) {
			a[i] != b[i -1];
			flag = 0;
		}
	}

	if (flag == 1) {
		cout << "yay" << endl;
	}

	else 
		cout << "No" << endl;

	system("pause");
	return 0;
}