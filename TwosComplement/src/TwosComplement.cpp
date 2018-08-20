#include <iostream>
using namespace std;
/* UNSIGNED
 * 3-bit system:
 * 111 = 7 = (2 to the power of 3) - 1 = (2x2x2)-1 = 7
 * 8-bit system
 * 11111111 = 255 = (2^8) - 1 = 255
 *
 * SIGNED
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -0
 * 101 = -1
 * 110 = -2
 * 111 = -3
 *
 * 001 (1)  +
 * 101 (-1) =
 * --------
 * 110 (-2) should be 0 in real life, so wrong answer! Bad system
 *
 * One's Complement
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -3
 * 101 = -2
 * 110 = -1
 * 111 = -0
 *
 * 001 (1)  +
 * 110 (-1) =
 * --------
 * 111 (-0 = 0) right answer! Good system!
 *
 * But there are flaws
 * 0011 (3)  +
 * 0101 (-2) =
 * 1000 wrong answer clearly
 * to fix this,.. add overflow to the right: 000 + 1 = 001
 * 001 (right answer)
 *
 * Two's Complement
 * 000 = 0
 * 001 = 1
 * 010 = 2
 * 011 = 3
 * 100 = -4
 * 101 = -3
 * 110 = -2
 * 111 = -1
 *
 * 0010 (2)  +
 * 0110 (-2) =
 * --------
 * 1000 -> discard overflow bit -> 000 (right answer!)
 *
 * 010 (2)  +
 * 101 (-3) =
 * --------
 * 111 (-1) (right answer)
 *
 */

int main() {
	// Two's complement:
	char value = 127;
	cout << (int)value << endl;
	value++;
	cout << (int)value << endl;

	return 0;
}
