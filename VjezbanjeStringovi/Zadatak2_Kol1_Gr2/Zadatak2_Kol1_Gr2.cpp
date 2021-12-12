/*Napisati funkciju koja transformira clanove vektora na nacin da: 
- ako je broj paran podjeli ga s 2 ( n/2 )
- ako je broj neparan pomnozi ga s tri i doda 1 ( 3*n+1 )
Postupak se ponavlja dok svi clanovi vektora nisu potencije broja 2 
POMOC: Broj je potencija broja 2 ako vrijedi n&(n-1)==0 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checkTwo(vector<int> vct)
{
	int cnt = 0;
	for (int i = 0; i < vct.size(); i++)
	{
		if ((vct[i] & (vct[i] - 1)) == 0)
		{
			cnt++;
		}
	}
	return(cnt != vct.size());
}

void transformiraj(vector<int>& vct)
{
	while (checkTwo(vct))
	{
		for (int i = 0; i < vct.size(); i++)
		{
			if (vct[i] % 2 == 0) {
				vct[i] = vct[i] / 2;
			}
			else {
				vct[i] = (3 * vct[i]) + 1;
			}
		}
	}
}
int main()
{
	vector<int> vct = { 16,10,3,4,2 };
	transformiraj(vct);
	for (int i = 0; i < vct.size(); i++)
	{
		cout << vct[i] << endl;
	}
	return 0;
}