#include <iostream>
using namespace std;

int main() {

	string animals[][3] = { { "fox", "dog", "cat" }, { "mouse", "squirrel",
			"parrot" } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] << " " << flush;
		}

		cout << endl;
	}

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			cout << i * j << "\t" << flush;
		}

		cout << endl;
	}

	return 0;
}
