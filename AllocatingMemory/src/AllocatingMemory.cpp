#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying.." << endl;
	}

	~Animal() {
		cout << "Destrustor called." << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() {
		cout << "My name is: " << name << endl;
	}
};

int main() {

	char *pMem = new char[1000];
	delete[] pMem;

	Animal *pAnimal = new Animal[26];

	char letter = 'a';
	for (unsigned int i = 0; i < 26; i++, pAnimal++, letter++) {
		string name(5, letter);
		pAnimal->setName(name);
		pAnimal->speak();
		delete pAnimal;
	}

	char c = 'a';
	c++;
	string name(1, c);
	cout << name << endl;

	return 0;
}
