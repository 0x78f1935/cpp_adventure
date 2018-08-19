#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

namespace dog {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace dog */

#endif /* ANIMALS_H_ */
