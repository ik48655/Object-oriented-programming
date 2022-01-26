#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

void main() {
	Stack<int> arr;
	arr.push(1);
	arr.push(2);
	arr.push(3);
	arr.push(4);
	arr.pop();
	arr.print();
}