#include <iostream>
using namespace std;

int main() {
	int a[10] = { 2,5,6,7,9,13,16,18,19,20 }, search_element= 16;

	int start = 0, end = sizeof(a) - 1;
	
	while (start <= end) {
		int mid = (start + end) / 2;
		
		if (a[mid] == search_element) {
			cout << "The element is found at position no: " << mid+1 << endl;
			break;
		}

		else if (search_element > a[mid]) {
			start = mid + 1;
			
		}

		else if (search_element < a[mid]) {
			end = mid - 1;
		}

		else
			cout << "The element is not found" << endl;

	}
	

	system("pause");
	return 0;
}
