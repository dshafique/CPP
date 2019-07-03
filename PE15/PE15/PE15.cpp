#include <iostream>

using namespace std;

void recursive(int max, int current) {
	for (int i = 0; i < max - current; i++) {
		cout << " ";
	}
	for (int i = 0; i < current; i++) {
		cout << " *";
	}
	cout << "\n";

	if (current == max)
		return;

	recursive(max, current + 1);

	for (int i = 0; i < max - current; i++) {
		cout << " ";
	}
	for (int i = 0; i < current; i++) {
		cout << " *";
	}
	cout << "\n";
}


int main() {
	cout << "type in the number of stars: " << endl;
	int nlines = 0;
	cin >> nlines;

	recursive(nlines, 1);

	cin >> nlines;
}
