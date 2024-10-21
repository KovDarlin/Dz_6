#include <iostream>
#include <string>
using namespace std;


void del(string& str, char sym) {
	str.erase(remove(str.begin(), str.end(), sym), str.end());
}

int main() {
	string first;
	char symbol;

	cout << "Enter string: ";
	getline(cin, first);

	cout << "Enter symbol for delete: ";
	cin >> symbol;

	del(first, symbol);
	cout << "Your new string: " << first << endl;
}