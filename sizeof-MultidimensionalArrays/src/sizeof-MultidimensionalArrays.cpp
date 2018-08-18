#include <iostream>
using namespace std;

int main() {

	string animals[][3] = {
			{ "fox", "dog", "cat" },
			{ "mouse", "squirrels",	"parrot" }
	};

	cout << "Size of a string: " << sizeof(string) << endl;
	cout << "Size of total animals: " << sizeof(animals) << endl;
	cout << "Size of first object in animals: " << sizeof(animals[0]) << endl;
	cout << "Size of second object in animals: " << sizeof(animals[1]) << endl;

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
