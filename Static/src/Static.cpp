#include <iostream>
using namespace std;

// .h header file
class Test {
public:
	// Initialization of const must be done right here!
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test() {
		id = ++count; // if count++ is used object one will be 0 and two will be 1
	}

	int getId() {
		return id;
	}

	static void showInfo() {
		cout << count << endl;
	}
};

// .cpp source
int Test::count = 0;

// main file
int main() {

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object one ID: " << test1.getId() << endl;

	Test test2;
	cout << "Object two ID: " << test2.getId() << endl;

	Test::showInfo();

	return 0;
}
