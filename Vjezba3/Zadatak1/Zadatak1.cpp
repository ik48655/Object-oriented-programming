
#include <iostream>
#include "header.h"
using namespace std;
int main()
{
	int vel1, vel2, a, b; // First size, second size, interval start and interval end
	vector<int> vc1, vc2; // Vector one and vector two

	cout << "Unesite velicinu niza." << endl; // We input the size of the first vector
	cin >> vel1;

	cout << "Unesite clanove niza." << endl; // We input the "array" members into the vector
	vctinp(vc1, vel1); // Function call

	cout << "Unesite interval raspona brojeva za niz." << endl; // We input interval start and interval end
	cin >> a;
	cin >> b;

	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	cout << "Unesite clanove niza." << endl; // We input the second vector 
	vctinp2(vc2, a, b);

	vel2 = vc2.size(); // Size of second vector 

	cout << "Prvi niz: " << endl; // Output of first vector
	vctprint(vc1);
	cout << "Drugi niz: " << endl; // Output of second vector
	vctprint(vc2);


}

