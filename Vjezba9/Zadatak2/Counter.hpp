#ifndef _COUNTER
#define _COUNTER
#include "Animal.hpp"

class Counter {
private:
	int sum = 0;
public:
	void SumLegs(vector<Animal*>& a);
	void printSum();
};

#endif