#include <iostream>
using namespace std;

class Animal {
public:
	void speak() { cout << "Grrrr" << endl; } ;
};

class Cat: public Animal {
private:
	string name;

public:
	void setName(string newName) {name = newName;};
	void jump() { cout << name << " is jumping!" << endl;}
};

class Tiger: public Cat {
public:
	void attackAntelope() { cout << "Tiger is attacking the antelope!" << endl;};
};

int main() {
	Animal a;
	a.speak();

	Cat cat;
	cat.setName("harry");
	cat.jump();
	cat.speak();

	Tiger tiger;
	tiger.setName("Mary");
	tiger.jump();
	tiger.speak();
	tiger.attackAntelope();

	return 0;
}
