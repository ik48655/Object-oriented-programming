/*Napisati funkciju koja vraca prosjecne vrijednosti pozitivnih i prosjecne
 vrijednosti negativnih elemenata u vektoru*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void prosjek(vector<int> v, float& pprosj, float& nprosj)
{
	int pcnt = 0, ncnt = 0;
	pprosj = 0, nprosj = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > 0)
		{
			pcnt++;
			pprosj += v[i];
		}
		else
		{
			ncnt++;
			nprosj += v[i];
		}
	}
	pprosj = pprosj / pcnt;
	nprosj = nprosj / ncnt;
}
int main()
{
	vector<int> br = { 1,2,3,-4,-5,-6,7,8,9, - 10 };
	float p1, p2;
	prosjek(br, p1, p2);
	cout << "Prosjek pozitivnih brojeva iz vektora je: " << p1 << endl;
	cout << "Prosjek negativnih brojeva iz vektora je: " << p2 << endl;
	return 0;
}