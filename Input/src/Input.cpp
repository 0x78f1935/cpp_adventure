#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name: " << flush;

	string input;

	cin >> input;

	cout << "Hello, " << input << endl;

	cout << "Enter a number: " << flush;

	int value;

	cin >> value;

	cout << "Your lucky number is: " << value << endl;

	return 0;
}
