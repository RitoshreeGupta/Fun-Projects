#include <iostream>
using namespace std;

int fib(int num) {
	if (num == 1) {
		return 0;
	}

	if (num == 2) {
		return 1;
	}

	else
		return fib(num - 1) + fib(num - 2);
}


int main() {

	int index, options;
	cout << "Enter the index no: " << endl;
	cin >> index;

	while (true) {

		cout << "Enter the options: 1. check 2. exit" << endl;
		cin >> options;

		if (options == 1) {
			int num = fib(index);
			cout << num << endl;

		}

		else {
			break;
		}
		
	}
	
		

	
	

	system("pause");
	return 0;
}