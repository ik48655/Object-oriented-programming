/*
* Napisati funkciju koja transformira clanove vektora cijelih brojeva na sljedeci nacin:
* ako je broj paran, podijeli ga s dva ( n/2 )
* ako je broj neparan, pomnozi ga s tri i doda jedan ( 3*n+1 )
* Postupak se ponavlja dok svi clanovi nisu potencije broja 2.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool potencija(vector<int> v)
{
	int br = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if ((v[i] & (v[i] - 1)) == 0)
		{
			br++;
		}
	}
	return(br != v.size());

}
void transformiraj(vector<int>& v)
{
	while (potencija(v))
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] % 2 == 0)
			{
				v[i] = v[i] / 2;
			}
			else
			{
				v[i] = 3 * v[i] + 1;
			}

		}
	}
}
int main()
{
	vector <int> v = { 16,10,3,4,2 };
	transformiraj(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}