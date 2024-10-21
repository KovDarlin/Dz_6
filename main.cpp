#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int litera = 0;
	int cifra = 0;
	int inshe = 0;
	string first;
	cout << "Enter string: " ;
	getline(cin, first);
	for (char& bck : first) {
		if (bck == ' ') {
			continue;
		}
		if (isalpha(bck)) {
			litera++;
		}
		else if (isdigit(bck)) {
			cifra++;
		}
		else {
			inshe++;
		}

	}
	cout << "Count letters: " << litera << endl;
	cout << "Count numbers: " << cifra << endl;
	cout << "Count anoters : " << inshe << endl;
}