#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// swap the elements
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// print the sorted array
	cout << "Sorted Array: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[100], i, n, temp;
	// ask user for number of elements to be sorted
	cout << "Enter the size of array: ";
	cin >> n;
	// input elements if the array
	for (i = 0; i < n; i++)
	{
		cout << "Enter element no: ";
		cin >> arr[i];
	}
	// call the function bubbleSort
	bubbleSort(arr, n);
	cout << endl;

	system("pause");
	return 0;
}