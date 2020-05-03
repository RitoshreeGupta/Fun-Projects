#include <iostream>
using namespace std;

int main() {
	
	
	int fib[50], num, option;

	fib[1] = 0;

	fib[2] = 1;

	for (int i = 3; i < 51; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	while (true) {
		cout << "Enter the options:1.continue 2.exit" << endl;
		cin >> option;

		if (option == 1) {
			cout << "Enter the number: " << endl;
			cin >> num;

			cout << fib[num] << endl;
		}
		else {
			break;
		}


	}

	



	system("pause");
	return 0;
}