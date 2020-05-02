#include <iostream>
using namespace std;

int main() {

	const int n = 5;
	int a[n], b[n], value;

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

	//compare
	int flag = 1; int j = n - 1;

	for (int i = 0; i < n; i++) {
		if (a[i] != b[j]) {
			flag = 0;
		}
		j--;
	}

	if (flag == 1) {
		cout << "yay" << endl;
	}

	else
		cout << "No" << endl;

	system("pause");
	return 0;
}