#include <iostream>
#include <string>
using namespace std;


void symbol_pos(string& str, char sym, int pos) {
	if (pos > str.length() || pos < 0) {
		cout << "O no Problem!" << endl;
		return;
	}
	str.insert(pos, 1, sym);
}

int main() {
	string first;
	char symbol;
	int pos;

	cout << "Enter string: ";
	getline(cin, first);

	cout << "Enter symbol: ";
	cin >> symbol;

	cout << "Enter position for symbol: ";
	cin >> pos;

	symbol_pos(first, symbol, pos);
	cout << "Your new string: "<< first<<endl;
}