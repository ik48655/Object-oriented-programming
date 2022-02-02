/*Napisati funkciju koja transformira clanove vektora cijelih brojeva na
* sljedeci nacin:
* ako je broj paran, podjeli ga s dva (n/2)
* ako je broj neparan, pomnozi ga s tri i doda jedan (3*n+1)
* Postupak se ponavlja dok svi clanovi vektora nisu potencije broja dva.
* 1. iteracija 16, 10, 3, 4, 2 ---> 8, 5, 10, 2, 1
* 2. iteracija 8, 5, 10, 2, 1 ----> 4, 16, 5, 1, 4
* 3. iteracija 4, 16, 5, 1, 4 ----> 2, 8, 16, 4, 2
* POMOC: broj n potencija broja dva ako vrijedi: n&(n-1)==0
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checkCnt(vector<int> v)
{
	int cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if ( (v[i] & (v[i] - 1)) == 0 )
		{
			cnt++;
		}
	}
	return(cnt != v.size());
}

void ChangeVec(vector<int>& v)
{
	while (checkCnt(v))
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] % 2 == 0)
			{
				v[i] = v[i] / 2;
			}
			else
				v[i] = 3 * v[i] + 1;
		}
	}
}
int main()
{
	vector<int> v = { 16,10,3,4,2 };
	ChangeVec(v);
	for (int i = 0 ; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}