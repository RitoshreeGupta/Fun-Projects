#include <iostream>
using namespace std;

int main() {
	int size, a[100], Mul = 1;
	cout << "Enter the size of the array: " << endl;
	cin >> size;

	cout << "Please enter the array elements: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i];
		Mul = Mul * a[i];
	}

	cout << "The sum of the element: " << Mul << endl;

	system("pause");
	return 0;
}