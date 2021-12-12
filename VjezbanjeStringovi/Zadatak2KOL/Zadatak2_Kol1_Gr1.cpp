/*Napisati funkciju koja prima tri numericka arugmenta num, len(len>0), i k,
a vraca vektor duljine len u kojem su visekratnici od num, koji nisu visekratnici
od k u rastucem poretku po apsolutnoj vrijednosti*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
vector<int> visekratnici(int num, int len, int k)
{
	vector<int> vct;
	int n = 0;
	int i = 1;
	while (n < len)
	{
		if ((num * i) % k != 0)
		{
			vct.push_back(num*i);
			n++;
		}
		i++;
	}
	return vct;
}
int main()
{
	vector<int> v = visekratnici(-3, 7, 12);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		cout << endl;
	}
	return 0;
}