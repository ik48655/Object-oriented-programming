/*Napisati funkciju koja prima tri numericka argumenta num, len(len>0) i k,
* a vraca vektor duljine len u kojem su visekratnici od num, koji nisu visekratnici od k
* u rastucem poretku po apsolutnoj vrijednosti.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> visekratnici(int num, int len, int k)
{
	vector<int> v;
	int n = 0;
	int i = 1;
	while (n < len)
	{
		if ((num * i) % k != 0)
		{
			v.push_back(num * i);
			n++;
		}
		i++;
	}
	return v;
}
int main()
{
	vector<int> vsk = visekratnici(-3, 7, 12);
	for (int i = 0; i < vsk.size(); i++)
	{
		cout << vsk[i] << endl;
	}

	return 0;
}