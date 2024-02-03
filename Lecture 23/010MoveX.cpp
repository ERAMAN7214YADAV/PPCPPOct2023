/*

Given a string str, design a recursive algorithm to move all the occurrence of letter x
to the end of the string str.

Example
	Input : str = "axbcxdxfx"
	Output: str = "abcdfxxxx"

	Input : str = "xabcxdxfx"
	Output: str = "abcdfxxxx"

*/

#include<iostream>

using namespace std;

string f(string str) {

	// base case
	if (str == "") { // str.empty()
		return str;
	}

	// recursive case

	string subString = str.substr(1);
	string subStringFromMyFriend = f(subString);

	if (str[0] == 'x') {
		// return subStringFromMyFriend + str[0];
		return subStringFromMyFriend + string(1, str[0]);
	}

	// return str[0] + subStringFromMyFriend;
	return string(1, str[0]) + subStringFromMyFriend;

}

int main() {

	string str = "axbxxc";

	cout << f(str) << endl;

	return 0;
}