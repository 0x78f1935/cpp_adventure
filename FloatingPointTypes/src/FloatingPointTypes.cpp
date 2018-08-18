#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;

	cout << "A float has a size of: " << sizeof(float) << " bytes" << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << "A double has a size of: " << sizeof(dValue) << " bytes" << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.456789876543210;
	cout << "A long double has a size of: " << sizeof(lValue) << " bytes"
			<< endl;
	cout << setprecision(20) << fixed << lValue << endl;

	return 0;
}
