#include <iostream>
using namespace std;

int main() {
	const int s1 = 6, s2 = 7;
	int a[s1] = { 2,4,5,3,8,7 }, b[s2] = { 6,10,13,4,24,11,23 }, merged[s1+s2];

	//elements of b[] comes first
	for (int i = 0; i < s1 + s2; i++) {
		if (i < s2) {
			merged[i] = b[i];
		}
		else
			merged[i] = a[i - s2];
	}
	//elements of a[] comes first
	for (int i = 0; i < s1 + s2; i++) {
		if (i < s1) {
			merged[i] = a[i];
		}
		else
			merged[i] = b[i - s1];
	}

	//print merged array
	for (int i = 0; i < s1 + s2; i++) {
		cout << merged[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}