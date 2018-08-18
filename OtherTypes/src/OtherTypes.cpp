#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of char: " << sizeof(bValue) << endl;

	// refer to ascii table
	char cValue = 55;
	cout << cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of char: " << sizeof(cValue) << endl;

	char cNewValue = '9';
	cout << cNewValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of char: " << sizeof(cNewValue) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << (char) wValue << endl;
	cout << "Size of char_t: " << sizeof(wchar_t) << endl;
	cout << "Size of char_t: " << sizeof(wValue) << endl;

	return 0;
}
