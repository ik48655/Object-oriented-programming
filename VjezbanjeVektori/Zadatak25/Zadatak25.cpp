/*Napisati funkciju koja ce vratiti broj elemenata vecih i broj elemenata
manjih od danog broja u nekom vektoru.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void vecimanji(vector<int> v, int n,int& veci, int& manji)
{
	veci = 0;
	manji = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > n)
		{
			veci++;
		}
		if (v[i] < n)
		{
			manji++;
		}
	}
}
int main()
{
	int v, m;
	vector<int> niz = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int n = 8;
	vecimanji(niz, n, v, m);
	cout << "Broj brojeva manjih od broja " << n << " je: " << m << endl;
	cout << "Broj brojeva vecih od broja " << n << " je: " << v << endl;
	return 0;
}