#include <iostream>
using namespace std;

class Machine {
private:
	int id;
public:
	Machine(): id(0) { cout << "Machine no-arguments constructor called" << endl; };
	Machine(int id): id(id) { cout << "Machine parameterized constructor called" << endl; };
	void info() { cout << "ID: " << id << endl; };
};

class Vehicle: public Machine {
public:
	Vehicle() { cout << "Vehicle no-arguments constructor called" << endl; };
	Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor called" << endl; };
};

class Car: public Vehicle {
public:
	Car(): Vehicle(123) { cout << "Car no-arguments constructor called" << endl; };
	Car(int id): Vehicle(id) { cout << "Car parameterized constructor called" << endl; };
};


int main() {
	Car car;
	car.info();

	return 0;
}
