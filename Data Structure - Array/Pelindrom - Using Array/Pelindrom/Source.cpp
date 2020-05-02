#include <iostream>
using namespace std;

int main() {

	const int n = 5;
	int a[n], value;
	for (int i = 0; i < n; i++) {
		cout << "Please enter a value: ";
		cin >> value;
		a[i] = value;

	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	int pel = 1;
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) {
			pel = 0;
		}
	}
	if (pel == 1) {
		cout << "The array is a pelindrom" << endl;
	}
	else
		cout << "The array is not a pelindrom";


	system("pause");
	return 0;
}