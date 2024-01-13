#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(const string& s) {

	int i = 0;
	int j = s.size() - 1;

	while (i < j) {

		if (s[i] != s[j]) {
			return false;
		}

		i++;
		j--;

	}

	return true;

}

// time : O(n^3)

int countPalindromicSubstrings(const string& s) {

	int n = s.size();
	int cnt = 0; // to track the no. of palindromic substrings in the given string

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			string subString = s.substr(i, j - i + 1);
			if (isPalindrome(subString)) {
				cnt++;
			}
		}
	}

	return cnt;

}

int main() {

	string s = "abaaba";

	cout << countPalindromicSubstrings(s) << endl;

	return 0;
}