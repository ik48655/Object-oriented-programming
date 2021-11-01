
#include <iostream>
#include "header.h"
using namespace std;
int main()
{
	int vel1, vel2, a, b;
	vector<int> vc1, vc2;

	cout << "Unesite velicinu niza." << endl;
	cin >> vel1;

	cout << "Unesite clanove niza." << endl;
	vctinp(vc1, vel1);

	cout << "Unesite interval raspona brojeva za niz." << endl;
	cin >> a;
	cin >> b;

	if (a > b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}

	cout << "Unesite clanove niza." << endl;
	vctinp2(vc2, a, b);

	cout << "Prvi niz: " << endl;
	vctprint(vc1);
	cout << "Drugi niz: " << endl;
	vctprint(vc2);


}

