#include <iostream>
using namespace std;

int main() {

	/* operators:
	 * == equality test
	 * != not equals
	 * < less then
	 * > greater then
	 * <= less or equal to
	 * >= greater or equal to
	 */

	int value1 = 7;
	int value2 = 4;

	// Single condition
	cout << "Condition 1:" << endl;
	if (value1 >= 7) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}

	// And condition
	cout << "Condition 2:" << endl;
	if (value1 == 7 && value2 == 4) {
		cout << "Condition 2: true" << endl;
	} else {
		cout << "Condition 2: false" << endl;
	}

	// Or condition
	cout << "Condition 3:" << endl;
	if (value1 == 7 || value2 < 3) {
		cout << "Condition 3: true" << endl;
	} else {
		cout << "Condition 3: false" << endl;
	}

	// Complex condition
	cout << "Condition 4:" << endl;
	if ((value2 != 8 && value1 == 10) || value1 < 10) {
		cout << "Condition 4: true" << endl;
	} else {
		cout << "Condition 4: false" << endl;
	}

	// Bool example
	bool condition5 = (value2 != 8) && (value1 == 10);
	cout << "condition 5: " << condition5 << endl;

	bool condition6 = value1 < 10;
	cout << "condition 6: " << condition5 << endl;

	cout << "Condition 7:" << endl;
	if (condition5 || condition6) {
		cout << "Condition 7: true" << endl;
	} else {
		cout << "Condition 7: false" << endl;
	}

	return 0;
}
