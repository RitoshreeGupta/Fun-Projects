#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num, flag = 0;
	cout << "Enter a number: " << endl;
	cin >> num;

	cout << "Is it Prime Number?" << endl;

	for (int i = 2; i <= sqrt(num)/*num / 2*/; i++) {
		if (num % i == 0) {
			flag = 1;
		}
	}

	if (flag == 1) {
		cout << "It's not a Prime Number" << endl;
	}
	else
		cout << "It's a Prime Number" << endl;


	system("pause");
	return 0;
}