#include <iostream>
using namespace std;

int main() {
	const int n = 9;
	int a[n] = { 2,7,8,23,42,56,18,55,23 }, odd[n], even[n], count1 = 0, count2 = 0;

	cout << "ODD: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			odd[i] = a[i];
			cout << odd[i] << " ";
			count1++;
		}
	}

	cout << endl<< "Total Odd Numbers: " << count1 << endl;

	cout << "EVEN: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even[i] = a[i];
			cout << even[i] << " ";
			count2++;
		}
	}

	cout <<endl<< "Total Even Numbers: " << count2 << endl;


	system("pause");
	return 0;
}