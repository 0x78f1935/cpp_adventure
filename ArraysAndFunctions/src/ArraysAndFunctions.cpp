#include <iostream>
using namespace std;

void show1(int nElements, string texts[]) {

	// cout << sizeof(texts) << endl; // returns size of pointer!

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(int nElements, string *texts) {

	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]) {

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

string texts[] = { "one", "two", "three" };
string *pGetArray() {
	// string texts[] = { "one", "two", "three" }; // Don't return pointers to local variables!
	return texts;
}

char *pGetMemory() {
	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMem) {
	delete[] pMem;
}

int main() {

	string texts[] = { "apple", "orange", "banana" };

	cout << sizeof(texts) << endl;

	show1(3, texts);
	show2(3, texts);
	show3(texts);

	char *pMemory = pGetMemory();
	freeMemory(pMemory);

	return 0;
}
