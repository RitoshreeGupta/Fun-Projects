#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	char crtr = 2;
	bool flag = false;
	if (crtr <= 48 && crtr >= 57) {

		flag = true;
	}

	if (flag == true){
		cout << "Digit" << endl;
	}
	
	else  {
		cout << "Not Digit" << endl;
	}

	system("pause");
	return 0;
}