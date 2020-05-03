#include <iostream>
using namespace std;

int length(char str[]) {
	int count = 0;
	int i = 0;
	

	while (str[i] != '\0') {
		count++;
		i++;
	}

	return count;
}


int main() {
	char crtr;
	char a[100];

	cout << "Enter the word: " << endl;
	cin >> a;
		
	int val = length(a);
	cout << "Size of the word: " << endl;
	cout << val << endl;

	cout << "Which character do you want to search?" << endl;
	cin >> crtr;
	int frqn = 0;
	for (int i = 0; i <= val; i++) {
		if (a[i] == crtr || a[i] == crtr + 32) {
			frqn++;
		}

	}

	cout << "Frequency: " << frqn << endl;

	




	system("pause");
	return 0;
}