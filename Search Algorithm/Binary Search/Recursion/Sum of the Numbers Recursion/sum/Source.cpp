#include <iostream>
using namespace std;
int s(int number) {

	if (number == 1)
		return 1;
	else
		return number + s(number - 1);
}
int main() {

	int number;

	cout << "Enter the number: " << endl;
	cin >> number;

	int sum = s(number);
	cout << sum << endl;

	system("pause");
	return 0;
}