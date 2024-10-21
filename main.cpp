#include <iostream>
#include <string>
using namespace std;


void delete_sym(string& str, int pos) {
	if (pos > str.length() || pos < 0) {
		cout << "O no Problem!" << endl;
		return;
	}
	str.erase(pos, 1);
}

int main() {
	string first;
	int pos;

	cout << "Enter string: ";
	getline(cin, first);

	cout << "Enter position for symbol delete: ";
	cin >> pos;

	delete_sym(first, pos);
	cout << "Your new string: " << first << endl;
}