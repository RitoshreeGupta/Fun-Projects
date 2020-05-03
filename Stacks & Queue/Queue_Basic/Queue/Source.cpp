#include <iostream>
using namespace std;

int main() {

	int s[10], front = -1, rear = -1, options;
	while (true) {
		bool flag = false;
		cout << "Enter the options: 1.push 2.pop 3.Print 4. Queue status 5.exit " << endl;
		cin >> options;

		if (options == 1) {
			s[++rear] = rand() % 10;
			if (rear == 0 && front == -1) {
				front++;
			}
		}
		else if (options == 2) {
			front++;
		}

		else if (options == 3) {
			for (int i = front; i <= rear; i++) {
				cout << s[i] << " ";
			}
			cout << endl;
		}
		else if (options == 4) {
			if (front > rear) {
				cout << "the queue is empty";
			}
			else
				cout << "the queue is not empty";

			cout << endl;
		}
		else {
			flag = true;
			break;
		}

		if (flag) {
			break;
		}
	}

	system("pause");
	return 0;
}