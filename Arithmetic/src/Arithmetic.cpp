#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precedence
 */

int main() {

	double value1 = (double) 7 / 2;
	cout << value1 << endl;

	int value2 = (int) 7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; // value3 = value2 + 1 or value3++;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4 / 5;
	cout << value4 << endl;

	int value5 = 12 % 5;
	cout << value5 << endl; // value5 = value5 / 5 take left overs

	double equation = ((5 / 4) % 2) + (2.3 * 6); // 5/4=2; 2%2=0; 2.3*6=14.8;
	cout << equation << endl;

	int time = 920;
	clock(time);

	return 0;
}
