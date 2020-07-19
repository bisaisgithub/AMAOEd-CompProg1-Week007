#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "Enter the number of rows: ";
	cin >> n;
	cout << endl;
	int spaceT = 100;
	int starT = 100;
	switch(starT) {
	case 100:
		cout << "spaceT:" << spaceT;
		break;
	}
	for (int i = 0; i < n; i++) {
//		cout << "loop count: " << i;
		for (int t = 0; t < n - i - 1; t++) {
			cout << " " ;
		//	cout << "space count: " << t << endl;
			spaceT = t;
		}
		for (int t = 0; t < (i * 2) + 1; t++) {
			cout << "*" ;
//			cout << "Star count: " << t << endl;
			starT = t;
		}
//		cout << endl;
		cout << "i:" << i << " spaceT: " << spaceT << " startT:" << starT << endl;
	}

	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}