#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;

	while (i <= n) {

		// for the ith row, print 'i' numbers in the inc. order starting with 1

		int j = 1;
		int num = 1;

		while (j <= i) {

			cout << num << " ";
			num++;
			j++;

		}

		i++;

		cout << endl;

	}

	return 0;
}