#include <iostream>
using namespace std;
int fact(int n) {
	if (n == 0) {
		return 1;
	}

	else
		return n * fact(n - 1);
}
int main() {
	int num;
	cout << "Please Enter a number: " << endl;
	cin >> num;
	cout << "The Factorial of the num of " << num << " is " << fact(num) << endl;


	system("pause");
	return 0;
}