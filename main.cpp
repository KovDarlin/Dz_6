#include <iostream>
#include <string>
using namespace std;

int main() {
	string first;
	cout << "Enter string: ";
	getline(cin, first);

	for (char& bck : first) {
		if (bck == '.') {
			bck = '!';
		}

	}
	cout << "Count symbols: " << first << endl;

}