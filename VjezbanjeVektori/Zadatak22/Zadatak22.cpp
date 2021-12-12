/*Napisati funkciju koja za vektor brojeva vraca broj koji se najcesce ponavlja
u nizu i broj ponavljanja. Ako se više brojeva ponavlja jednaki broj puta,
vratiti vrijednosti za jedan od njih.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int brojpon(vector<int> v)
{
	int cnt = 0;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1 ; j < v.size(); j++)
		{
			if (v[i] == v[j])
			{
				cnt++;
			}
		}
	}
	return cnt;
}
int main()
{
	vector<int> v = { 1,2,3,1,5,6,7,1,9 };
	cout << "Broj ponavljanja neke znamenke je: " << brojpon(v) << endl; 
	return 0;
}