#include <iostream>
using namespace std;
int power(int a, int n) {
	if (n == 0) {
		return 1;
	}

	else
		return a * power(a, n - 1);
}
int main() {
	int num, pow;
	cout << "Please Enter a number: " << endl;
	cin >> num;
	cout << "Please enter the power of this number: " << endl;
	cin >> pow;
	cout << "The Solution: " << num << "^" << pow << " = " << power(num, pow) << endl;


	system("pause");
	return 0;
}