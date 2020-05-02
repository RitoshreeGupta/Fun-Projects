#include <iostream>
using namespace std;

int main() {
	int a[8] = { 2,5,4,6,8,4,4,4 }, count = 0, delElement = 4;

	cout << "The Array Elements are: ";
	for (int i = 0; i < 8; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "The Element I want to delete is: " << delElement << endl;

	for (int i = 0; i < 8; i++) {
		if (a[i] == delElement)
			count++;
	}

	while (true) {
		int flag = 0;
		
		for (int i = 0; i < 8; i++) {
			if (a[i] == delElement || flag == 1) {
				a[i] = a[i + 1];
				flag = 1;
			}

		}

		if (flag == 0) {
			break;
		}
	}

	cout << "The Array Elements are: ";
	for (int i = 0; i < 8 - count; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}