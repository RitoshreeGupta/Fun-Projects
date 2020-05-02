#include <iostream>
using namespace std;

int main() {

	int r1, c1, r2, c2;
	int A[3][3], B[3][3], C[3][3];
	cout << "Enter number of rows and columns of matrix A : ";
	cin >> r1 >> c1;
	cout << "Enter number of rows and columns of matrix B : ";
	cin >> r2 >> c2;

	if (r1 != c1) {
		cout << "multiplication is not possible";
	}
	
	cout << "Enter the elements of the matrix A: ";
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cin >> A[i][j];
		}
	}

	cout << "Enter the elements of the matrix B: ";
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cin >> B[i][j];
		}
	}



	
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			 C[i][j] = 0;
			for (int k = 0; k < r2; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	cout << "The multiplication of the matrix is: " << endl;
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	

	system("pause");
	return 0;
}