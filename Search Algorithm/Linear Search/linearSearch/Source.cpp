#include <iostream>
using namespace std;

int main() {
	int n, a[10], search_element, arr_position;
	cout << "Please Enter the array size: ";
	cin >> n;

	cout << "Please Enter the array element: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << "Enter the number that you want to search: ";
	cin >> search_element;
	

	int flag = 0;

	

	for (int i = 0; i < n; i++) {
		if (search_element == a[i]) {
			flag = 1;
			arr_position = i + 1;
		}
	}

	if (flag == 0) {
		cout << "The element is not found" << endl;
	}
	else
		cout << "The element is found on position no: " << arr_position << endl;


	system("pause");
	return 0;
}
