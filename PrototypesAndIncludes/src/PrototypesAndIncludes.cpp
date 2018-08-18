#include <iostream>
#include "utils.h"
using namespace std;

void doSomethingElse();

int main() {
	doSomething();
	doSomething();
	doSomething();

	doSomethingElse();
	doSomethingElse();
	doSomethingElse();

	return 0;
}

void doSomething() {
	cout << "Hello" << endl;
}

void doSomethingElse() {
	cout << "Hello" << "^2" << endl;
}
