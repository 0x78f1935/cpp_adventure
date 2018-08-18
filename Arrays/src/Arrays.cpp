#include <iostream>
using namespace std;

int main() {

	cout << "Array of intergers" << endl;
	cout << "==================" << endl;
	int values[3];

	values[0] = 88;
	values[1] = 194;
	values[2] = 2;

	cout << "Bad idea: " << values[3] << endl; // Not defind

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "================" << endl;

	double numbers[4] = { 4.5, 2.3, 7.2, 8.1 };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}

	cout << endl << "Initializing with strings" << endl;
	cout << "================" << endl;

	string text[] = { "apple", "banana", "orange" };

	for (int i = 0; i < 3; i++) {
		cout << "Element at index " << i << ": " << text[i] << endl;
	}

	cout << endl << "Initializing table of twelve" << endl;
	cout << "================" << endl;

	int twelve[] = { 12 };

	for (int i = 0; i < 13; i++) {
		cout << "Table of twelve: " << i << ": " << i * twelve[0] << endl;
	}

	return 0;
}
