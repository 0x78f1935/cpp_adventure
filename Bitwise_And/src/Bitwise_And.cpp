#include <iostream>
using namespace std;

int main() {

	int color = 0x123456; // Alpha value is removed for simplicity

	unsigned char red = (color & 0xFF0000) >> 16; // Alpha value is removed for simplicity
	unsigned char green = (color & 0x00FF00) >> 8; // Alpha value is removed for simplicity
	unsigned char blue = (color & 0x0000FF); // Alpha value is removed for simplicity

	cout << hex << (int) red << endl;
	cout << hex << (int) green << endl;
	cout << hex << (int) blue << endl;

	// or you can do the following (Works for me at least)

	unsigned char redAgain = color >> 16;
	cout << hex << (int) redAgain << endl;

	// Bitwise or: |

	return 0;
}
