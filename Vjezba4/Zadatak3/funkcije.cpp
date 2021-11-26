#include <iostream>
#include <string>
#include "header.h"

using namespace std;

void print_nums(string cont, int n) // Prints numbers
{
	for (int i = 0; i < n; i++) {
		cout << cont[i];
	}
}

void stuffing_bit(string& cont, int n) // Adds zero after 11111
{

	int c = 0;
	for (int i = 0; i < n; i++) {
		if (cont[i] == '1')
		{
			c++;
			if (c == 5) {
				cont.insert(++i, "0");
				c = 0;
			}
		}
		else {
			c = 0;
		}
	}
}

void unstuffing_bit(string& cont, int size) // Removes a zero after 11111, inverse to bit_stuffing
{
	int c = 0;
	for (int i = 0; i < size; i++) {
		if (cont[i] == '1') {
			c += 1;
			if (c == 5) {
				cont.erase(++i, 1);
				c = 0;
			}
		}
		else {
			c = 0;
		}
	}
}