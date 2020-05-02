#include <iostream>
using namespace std;

int main() {
	int size, a[2];

	cout << "Please enter the array elements: " << endl;
	cin >> a[0] >> a[1];
	cout << endl;
	cout << "Before Swapping: " << a[0] << " " << a[1] << endl;
	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;

	cout << "After Swaping: ";
	for (int i = 0; i < 2; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}