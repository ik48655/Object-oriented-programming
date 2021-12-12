/*Napisati funkciju koja u nizu cijelih brojeva racuna (ne ispisuje) koliko je
brojeva djeljivo sa 3 te koliko je brojeva djeljivo sa 5.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void broji(vector<int> v, int& spet, int& stri)
{
	spet = 0, stri = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 3 == 0)
		{
			stri++;
		}
		if (v[i] % 5 == 0)
		{
			spet++;
		}
	}
}
int main()
{
	vector<int> br = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int pet, tri;
	broji(br, pet, tri);
	cout << "Broj brojeva djeljivih s tri: " << tri << endl;
	cout << "Broj brojeva djeljivih s pet: " << pet << endl;
	return 0;
}