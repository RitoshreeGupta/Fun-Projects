#include <iostream>
using namespace std;

int BinarySearch(int a[], int start, int end, int search_element) {
	if (start > end) {
		cout << "The element is not found" << endl;
		return 0;
		}

	else {
		int mid = (start + end) / 2;
		if (a[mid] == search_element) {
			cout << "The element is found at position no: " << mid + 1 << endl;
			return 0;
		}

		else if (search_element > a[mid]) {
			start = mid + 1;
			BinarySearch(a, start, end, search_element);

		}

		else if (search_element < a[mid]) {
			end = mid - 1;
			BinarySearch(a, start, end, search_element);
		}


	}

}


int main() {

		int a[10] = { 2,5,6,7,9,13,16,18,19,20 }, search_element = 13;

		int start = 0, end = sizeof(a) - 1;

		BinarySearch(a, start, end, search_element);


	system("pause");
	return 0;
}