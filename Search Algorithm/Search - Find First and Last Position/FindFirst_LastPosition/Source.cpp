#include <iostream>
using namespace std;


int main() {
	int arr[6] = {5,7,7,8,8,10}, nums;
	cout << "Enter the search_element: ";
	cin >> nums;


	int result[2];
	result[0] = -1;
	result[1] = -1;
	int length = (sizeof(arr) / sizeof(arr[0]));
	// first binary search to find the first occurence of the target
	int start = 0;
	int end = length - 1;
	while (start + 1 < end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] == nums) {
			end = mid;
		}
		else if (arr[mid] > nums) {
			end = mid;
		}
		else {
			start = mid;
		}
	}
	if (arr[end] == nums) {
		result[0] = end;
	}
	if (arr[start] == nums)
	{
		result[0] = start;
	}
	// second binary search to find the last occurence of the target
	start = 0;
	end = length - 1;

	while (start + 1 < end) {
		int mid = start + (end - start) / 2;
		if (arr[mid] == nums) {
			start = mid;
		}
		else if (arr[mid] < nums) {
			start = mid;
		}
		else {
			end = mid;
		}
	}
	if (arr[start] == nums) {
		result[1] = start;
	}
	if (arr[end] == nums) {
		result[1] = end;
	}
	for (int i = 0; i < 2; i++) {
		cout << result[i] << " ";
	}


	system("pause");
	return 0;
}