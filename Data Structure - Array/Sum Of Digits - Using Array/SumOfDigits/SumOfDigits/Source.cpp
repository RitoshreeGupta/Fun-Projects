#include <iostream>
using namespace std;

int main() {
	int num, temp = 0, temp1 = 0;

	cout << "Enter the number: " << endl;
	cin >> num;

	int counter = 0, aux[100];
	while (num >= 10) {

		aux[counter] = num % 10;
		counter++;
		num = num / 10;


	}

	aux[counter] = num;
	int add = 0;
	for (int i = counter; i >= 0; i--) {
		cout << aux[i] << " ";
		
		/*add = add + aux[i];*/
		
	}
	aux[0] = temp; aux[1] = temp1;

	temp = temp * 2; 
	temp1 = temp1 * 5;

	cout << " jjj" << temp << " " << temp1;


	cout << endl;
	/*cout << "Sum of Digits: " << add << endl;
*/


	system("pause");
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int sum(int number) {
//	if (number == 0) {
//		return 0;
//	}
//
//	return (number % 10 + sum(number / 10));
//}
//
//int main() {
//	int num;
//
//	cout << "Enter the number: " << endl;
//	cin >> num;
//	cout << "Sum of Digits: " << sum(num) << endl;
//	
//
//	system("pause");
//	return 0;
//}