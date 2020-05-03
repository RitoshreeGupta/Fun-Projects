//#include <iostream>
//using namespace std;
//void division(int[], int[], int, int);
//
//int main() {
//	int aux[100];
//	int arr[12] = { 4,1,3,17,12,7,9,11,8,2,0,10 };
//	int n = sizeof(arr) / sizeof(arr[0]) ;
//	division(arr, aux, n - 1, 0);
//	system("pause");
//	return 0;
//}
//void division(int arr[], int aux[], int high, int low) {
//
//	if (low < high) {
//		int mid = (high + low) / 2;
//		division(arr, aux, mid, low);
//		division(arr, aux, high, mid + 1);
//
//		//cout << "High: " << high << " " << "low: " << low << endl;
//
//		for (int index = low; index <= high; index++) {
//			cout << arr[index] << " ";
//		}
//		cout << endl;
//		// sorting
//		int left_arrptr = low;
//		int right_arrptr = mid + 1;
//		//compare every situation
//		for (int index = low; index <= high; index++) {
//			if (left_arrptr == mid + 1) {
//				aux[index] = arr[right_arrptr];
//				right_arrptr++;
//			}
//			else if (right_arrptr == high + 1) {
//				aux[index] = arr[left_arrptr];
//				left_arrptr++;
//			}
//			else if (arr[left_arrptr] < arr[right_arrptr]) {
//				aux[index] == arr[left_arrptr];
//				left_arrptr++;
//			}
//			else {
//				aux[index] = arr[right_arrptr];
//				right_arrptr++;
//			}
//		}
//
//		for (int index = low; index <= high; index++) {
//			arr[index] = aux[index];
//			cout << aux[index] << " ";
//		}
//		
//
//		
//	}
//
//}

#include<iostream>
using namespace std;

void divide(int[], int[], int, int);
int main() {
	int aux[100];


	int arr[12] = { 4,1,3,17,12,7,9,11,8,2,0,10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	divide(arr, aux, n - 1, 0);

	system("pause");
	return 0;
}


void divide(int a[], int aux[], int high, int low) {
	if (low < high)
	{
		int mid = (high + low) / 2;
		divide(a, aux, mid, low);
		divide(a, aux, high, mid + 1);

		for (int index = low; index <= high; index++) {
			cout << " " << a[index];
		}
		cout << endl;

		int leftPointer = low;
		int rightPointer = mid + 1;

		for (int i = low; i <= high; i++) {
			if (leftPointer == mid + 1) {
				aux[i] = a[rightPointer];
				rightPointer++;
			}
			else if (rightPointer == high + 1) {
				aux[i] = a[leftPointer];
				leftPointer++;
			}

			else if (a[leftPointer] < a[rightPointer]) {
				aux[i] = a[leftPointer];
				leftPointer++;
			}
			else {
				aux[i] = a[rightPointer];
				rightPointer++;
			}
		}

		for (int i = low; i <= high; i++) {
			a[i] = aux[i];
			cout << aux[i] << " ";
		}


	}


}