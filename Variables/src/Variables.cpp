#include <iostream>
using namespace std;

int main() {
	int numberCats = 5;
	int numberDogs = 7;
	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total number of animals: " << numberCats + numberDogs << endl;

	cout << "New dogs arrived!" << endl;
	numberDogs += 4;
	cout << "Four dogs are new to the kennel!" << endl;
	cout << "New total number of dogs: " << numberDogs << endl;
	cout << "New total of animals: " << numberCats + numberDogs << endl;
	return 0;
}
