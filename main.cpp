#include <iostream>
#include <string>
using namespace std;

int main() {
	string first = "Lorem ipsum odor amet, consectetuer adipiscing elit.";
	cout << "Main string: " << first<< endl; 
	for (char& bck : first) {
		if (bck == ' ') {
			bck = '\t';
		}

	}
	cout << "New string: " << first << endl;
}