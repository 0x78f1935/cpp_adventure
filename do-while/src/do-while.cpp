#include <iostream>
using namespace std;

int main() {

	const string password = "hello"; // const is a keyword. This disables you to change the variable
	string input;

	do {
		cout << "Access denied..." << endl;
		cout << "Enter your password > " << flush;
		cin >> input;
	} while (input != password);

	cout << "Password accepted" << endl;

	return 0;
}
