#include<iostream>

using namespace std;

int main() {

	char ch;
	cout << "enter a character : ";
	cin >> ch;

	if (ch >= 65 and ch <= 90) {
		cout << "upperCase" << endl;
	} else if (ch >= 97 and ch <= 122) {
		cout << "lowerCase" << endl;
	} else if (ch >= 48 and ch <= 57) {
		cout << "digit" << endl;
	} else {
		cout << "special" << endl;
	}

	if (ch >= 'A' and ch <= 'Z') {
		cout << "upperCase" << endl;
	} else if (ch >= 'a' and ch <= 'z') {
		cout << "lowerCase" << endl;
	} else if (ch >= '0' and ch <= '9') {
		cout << "digit" << endl;
	} else {
		cout << "special" << endl;
	}

	return 0;
}