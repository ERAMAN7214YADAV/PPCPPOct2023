#include<iostream>

using namespace std;

int main() {

	int arr[5];

	// cout << sizeof(arr) << "B" << endl;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	// cout << arr[0] << endl;
	// cout << arr[1] << endl;
	// cout << arr[2] << endl;
	// cout << arr[3] << endl;
	// cout << arr[4] << endl;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	double brr[10];

	// cout << sizeof(brr) << "B" << endl;

	char crr[20];

	// cout << sizeof(crr) << "B" << endl;

	return 0;
}