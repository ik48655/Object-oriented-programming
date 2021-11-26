#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main()
{
	char bin;
	string binary;
	cout << "Enter bits" << endl;
	while (cin >> bin) {
		if ((bin != '1') && (bin != '0')) // While inputting 1 and zero program continues.
		{
			break;
		}
		binary.push_back(bin);
	}

	stuffing_bit(binary, binary.size());

	cout << endl << "Result of stuffing bit algorithm." << endl;
	print_binary(binary, binary.size());


	unstuffing_bit(binary, binary.size());

	cout << endl << "Result of unstuffing bit algorithm." << endl;
	print_binary(binary, binary.size());
}