#include<iostream>

using namespace std;

int main() {

	int number;
	
	cout << "Enter number of rows: ";
	cin >> number;

	for (int r = 1; r <= number; r++) {
		for (int j = 1; j <= (2 * number) - 1; j++) {
			if (j >= number - (r - 1) && j <= number + (r - 1)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cin.get();
}