#include <iostream>
using namespace std;

void seive(int flag[], int n) {
	flag[2] = 0;
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

	int n = 1001, num=100;
	int flag[1001], counter[500];
	

	for (int i = 0; i < 500; i++) {
		counter[i] = 0;

	}
	seive(flag, n);

	int index = 2;

	while (flag[num] == 1) {
		if ((flag[index] == 0) && num%index == 0) {
			num = num / index;
			counter[index]++;
		}
		else
			index++;
	}

	if (flag[num] == 0) {
		counter[num]++;
	}

	int factors[100], counter_factor = 0;

	for (int i = 2; i <= num; i++) {
		for (int j = 1; j <= counter[i]; j++) {
			factors[counter_factor] = i;
			counter_factor++;
		}
	}
	cout << factors[0];

	for (int i = 1; i < counter_factor; i++) {
		cout << "*" << factors[i];
	}
	cout << endl;
	

	system("pause");
	return 0;
}