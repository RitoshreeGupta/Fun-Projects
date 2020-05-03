#include <iostream>
using namespace std;

int main() {
	const int num = 4;
	int arr[num] = { 2, 7, 11, 15 }, target = 9, sum, result[2] = { -1,-1 };

	for (int i = 0; i < num; i++) {
		for (int j = 3; j>= 0; j--) {
			if (arr[i] + arr[j] == target && result[0] == -1 && result[1] == -1 && arr[i] != arr[j]) {
			
				result[0] = i;
				result[1] = j;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << "Index: " << arr[i] << " ";
	}

	system("pause");
	return 0;
}