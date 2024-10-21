#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string first;
	char symbol;

	cout << "Enter string: ";
	getline(cin, first);

	cout << "Enter symbol: ";
	cin >> symbol;

	for (char& bck : first) {
		if (bck == symbol) {
			count++;
		}

	}
	cout << "Count symbols: " << count << endl;
	
}
