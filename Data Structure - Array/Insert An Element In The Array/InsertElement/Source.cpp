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
	

	system("pause");
	return 0;
}