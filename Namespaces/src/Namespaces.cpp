#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;
using namespace dog;

int main() {

	Cat cat;
	cat.speak();

	dog::Cat cat2;
	cat2.speak();

	realcat::Cat cat3;
	cat3.speak();

	cout << dog::CATNAME << endl;
	cout << realcat::CATNAME << endl;
	cout << CATNAME << endl;

	return 0;
}
