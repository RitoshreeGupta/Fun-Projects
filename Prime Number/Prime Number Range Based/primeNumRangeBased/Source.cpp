#include <iostream>
#include <cmath>

using namespace std;

void seive(int flag[], int n) {

	for (int i = 4; i < n; i += 2) {
		flag[i] = 1;
	}

	for (int i = 3; i < n; i += 2) {
		flag[i] = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) {
				flag[i] = 1;
			}
		}
	}


}

int main() {
	int n = 1001, num;
	int flag[1001];
	flag[2] = 0;

	cout << "Enter the number: (1-100) " << endl;
	cin >> num;
	seive(flag, n);
	if (flag[num] == 0) {
		cout << "It's a Prime Number" << endl;

	}
	else
		cout << "It's not a Prime Number" << endl;



	system("pause");
	return 0;
}