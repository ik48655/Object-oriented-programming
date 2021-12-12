/*Napisati funkciju koja za niz brojeva vraca sumu onih koji su djeljivi sa 3 i
produkt onih koji su djeljivi sa 6.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sumaprodukt(vector<int> v, int& suma, int& produkt)
{
	suma = 0;
	produkt = 1;
	for (int i = 0; i < v.size();i++)
	{
		if (v[i] % 3 == 0)
		{
			suma += v[i];
		}
		if (v[i] % 6 == 0)
		{
			produkt *= v[i];
		}
	}
}
int main()
{
	int sum, prod;
	vector<int> vkt = { 1,2,3,4,5,6,7,8,9,10,12 };
	sumaprodukt(vkt, sum, prod);
	cout << "Suma znamenki djeljivih s 3 je : " << sum << endl;
	cout << "Produkt znamenki djeljivih s 6 je : " << prod << endl;
	return 0;
}