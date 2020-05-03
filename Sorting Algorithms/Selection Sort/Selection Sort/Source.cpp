#include <iostream>
using namespace std;

int main() {

	int a[6] = { 10, 8, 5, 7, 2, 10 }, smallVal, index;

	for (int i = 0; i < 5; i++) {
		smallVal = a[i + 1];
		index = i + 1;

		for (int j = i + 1; j < 5; j++) {
			if (a[j] < smallVal) {
				smallVal = a[j];
				index = j;
			}
		}

		if (a[i] > index) {
			/*std::swap(a[i], a[index]);*/
			swap(a[i], a[index]);
			for (int i = 0; i < 6; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
		}
	
	system("pause");
	return 0;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;

}