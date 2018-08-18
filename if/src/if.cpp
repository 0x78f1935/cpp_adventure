#include <iostream>
using namespace std;

int main() {
	string password = "hello";
	cout << "Please enter your password: " << flush;

	string input;
	cin >> input;

	cout << "'" << input << "'" << endl;

	if (input == password) {
		cout << "You are logged in" << endl;
	}

	if (input != password) {
		cout << "Your password was incorrect" << endl;
	}

	return 0;
}

