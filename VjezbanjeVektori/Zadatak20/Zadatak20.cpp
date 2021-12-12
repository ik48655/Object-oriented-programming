/*Napisati funkciju koja za vektor znakova vraca poziciju prvog malog slova u
  nizu i prvog velikog slova u nizu.*/
#include <algorithm>
#include <string>
#include <string_view>
#include <iostream>
#include <cctype>
#include<vector>
using namespace std;
void znakovi(vector<char> znak, int& poz1, int& poz2)
{
	for (int i = 0; i < znak.size(); i++)
	{
		if (znak[i] > 96 & znak[i] < 123 )
		{
			poz1 = i;
		}
		if (znak[i] > 64 & znak[i] < 91)
		{
			poz2 = i;
		}
	}
}
int main()
{
	int malo, veliko;
	vector<char> znaci = { 'A','B','C','a','b','c' };
	cout << "Velicina vektora je: " << znaci.size() << endl;
	cout << "Kapacitet vektora je: " << znaci.capacity() << endl;
	znakovi(znaci,malo,veliko);
	cout << "Prvo pojavljivanje malog slova je: " << malo << endl;
	cout << "Prvo pojavljivanje velikog slova je: " << veliko << endl;
	return 0;
}