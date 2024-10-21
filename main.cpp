#include <iostream>
#include <string>
using namespace std;

bool palidrom(const string& str) {
	int l = 0;
	int r = str.length() - 1;
	while (l < r) {
		if (str[l] == ' ') {
			l++;
			continue;
		}
		if (str[r] == ' ') {
			r--;
			continue;
		}
		if (tolower(str[l]) != tolower(str[r])) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}

int main() {
	string first = "Anna";
	cout << first << endl;
	if (palidrom(first)) {
		cout << "Palindrom" << endl;
	}
	else {
		cout << "NO Palindrom" << endl;
	}


	string second = "Hasan";
	cout << second << endl;
	if (palidrom(second)) {
		cout << "Palindrom" << endl;
	}
	else {
		cout << "NO Palindrom" << endl;
	}
}