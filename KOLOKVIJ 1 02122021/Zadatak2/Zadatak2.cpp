/*Napisati funkciju koja prima tri numericka argumenta num, len (len>0)
* i k, a vraca vektor duljine len u kojem su visekratnici od num, koji
* nisu visekratnici od k u rastucem poretku po apsolutnoj vrijednosti.
* 15, 5, 10 -------> 15, 45, 75, 105, 135
* -3, 7, 12 -------> -3, 6, -9, -15, 18, -21, -27
* 0, 6, 3 ---------> 0, 0, 0, 0, 0, 0
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> visekratnici(int num, int len, int k)
{
	vector<int> v;
	int i = 1;
	int n = 0;
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
	int n = 15, len = 5, k = 10;
	vector<int> v = visekratnici(n, len, k);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}