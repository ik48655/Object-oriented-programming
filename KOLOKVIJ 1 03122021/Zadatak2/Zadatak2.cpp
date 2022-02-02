/*
* Napisati funkciju koja prima vektor brojeva i dva broja a i b. Funkcija:
* izbacuje broj a iz vektora
* ubacuje broj 0 nakon svakog broja b u vektoru
* Koristiti standardne funkcije vektora.
* [16, 2, 3, 4, 2], a = 2, b = 3 ---------> [16, 3, 0, 4]
* [1, 2, 1, 2], a = 2, b = 3 -------------> [1, 1]
* [1, 3, 2, 3], a = 2, b = 3 -------------> [1, 3, 0, 3, 0]
* POMOC : Mozete koristiti i globalni std::find iz algorithm
* it = std::find(itstart, itend, el), koji vraca itend ako nadje element
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> promjeni(vector<int> v, int a,int b)
{
	vector<int> v2;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] != a)
		{
			v2.push_back(v[i]);
			if (v[i] == b)
			{
				v2.push_back(0);
			}
		}
	}
	return v2;
}
int main()
{
	vector<int> v1 = { 16, 2, 3, 4, 2 };
	vector<int> v2 = promjeni(v1,2,3);
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << endl;
	return 0;
}