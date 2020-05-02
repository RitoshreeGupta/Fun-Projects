#include <iostream>
using namespace std;

int main() {
	int a[9] = { 2,4,5,4,6,7,4,4,4 }, count = 0;
	for (int i = 0; i < 9; i++) {
		if (a[i] == 4) {
			count++;
		}
	}
	cout << "Total number of 4: " << count << endl;
	system("pause");
	return 0;
}