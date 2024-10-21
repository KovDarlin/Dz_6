#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	bool f = true;
	string first = "Lorem ipsum odor amet, consectetuer adipiscing elit.";
	cout << first << endl;
	for (int i = 0; i < first.length(); i++) {
		if ((first[i] == ' ') || (first[i] == ',') || (first[i] == '.') || (first[i] == '!') || (first[i] == '?')) {
			f = true;
		}
		else {
			if (f) {
				count++;
				f = false;
			}
		}
	}
	cout << count << endl;

}