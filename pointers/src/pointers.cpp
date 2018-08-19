#include <iostream>
using namespace std;

void badManipulate(double value) {
	cout << "2. Value of double in manipulate: " << value << endl;
	value = 10.0;
	cout << "3. Value of double in manipulate: " << value << endl;
}

void goodManipulate(double *pValue) {
	cout << "6. Value of double in manipulate: " << pValue << endl;
	*pValue = 10.0;
	cout << "7. Value of double in manipulate: " << pValue << endl;
}

int main() {

	int nValue = 8;

	int *pnValue = &nValue; // Pointer to nValue in memory

	cout << "Int value: " << nValue << endl;
	cout << "Pointer value to int address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl; // Dereference the pointer
	cout << "=================================" << pnValue << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	badManipulate(dValue);
	cout << "4. . dValue: " << dValue << endl;

	cout << "5. dValue: " << dValue << endl;
	goodManipulate(&dValue);
	cout << "8. . dValue: " << dValue << endl;

	return 0;
}
