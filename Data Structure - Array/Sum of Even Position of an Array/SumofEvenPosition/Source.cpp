#include <iostream>
using namespace std;

int main() {
	int size, a[100], sum = 0;
	cout << "Enter the size of the array: " << endl;
	cin >> size;

	cout << "please enter the array elements: " << endl;
	for (int i = 1; i < size; i++) {
		cin >> a[i];
		if (i % 2 == 0) {
			sum = sum + a[i];
		}
	}

	cout << "The sum of the even position element: " << sum << endl;

	system("pause");
	return 0;
}