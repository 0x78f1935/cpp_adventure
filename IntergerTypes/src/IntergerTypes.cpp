#include <iostream>
#include <limits.h>
#include <stdint.h>
using namespace std;

int main() {
	int value = 546561367;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 2147483647;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of large int: " << sizeof(lValue) << endl;
	cout << "Size of short int: " << sizeof(sValue) << endl;

	unsigned int uValue = 2342343321;
	cout << uValue << endl;
	cout << "Size of unsigned int: " << sizeof(uValue) << endl;

	int64_t tValue = 275280442884751360;
	cout << tValue << endl;
	cout << "Size of 64bit int: " << sizeof(tValue) << endl;

	return 0;
}
