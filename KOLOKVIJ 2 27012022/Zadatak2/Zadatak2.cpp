/*Napisite template funkciju koja kao parametre ima vektor elemenata,
* i dva elementa x i y. Funkcija vraca true ako je pozicija prvog pojavljivanja elementa
* x u vektoru manja od pozicije prvog pojavljivanja elementa y u vektoru, inace vraca false.
* A jednog od elemenata x ili y nema u vektoru, funkcija baca iznimku s tekstom "Element not found".
* PRIMER: Za vektor [5,2,3,4,5,2] i x = 5, y = 3, funkcija vraca true, jer je prvo pojavljivanje elementa 5
* na poziciji 0, a prvo pojavljivanje elementa 3 na poziciji 2.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template <typename T>
bool xy(vector<T> v, T x, T y)
{
	if (find(v.begin(), v.end(), x) < find(v.begin(), v.end(), y))
	{
		return true;
	}
	else
		return false;
}

int main()
{
	vector<int> vb = { 1,2,3,4,5,6,7,8,9,10 };
	vector<char> vs = { 'a','b','c','d','e','f','g' };
	vector<double> vd = { 1.2,1.3,1.4,2.5,2.6,2.7,3.8,3.9,4.0 };
	cout << xy<int>(vb, 1, 8) << endl;
	cout << xy<char>(vs, 'f', 'a') << endl;
	cout << xy<double>(vd, 1.3, 2.7) << endl;
	return 0;
}