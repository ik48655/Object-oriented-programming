/*Napisati funkciju koja preslozi niz brojeva tako da sve nule budu na pocetku niza.*/
#include <algorithm>
#include <string>
#include <string_view>
#include <iostream>
#include <cctype>
#include<vector>
using namespace std;
bool isdivisible(int k)
{
	return ((k % 6) == 0);
}
void preuredi(vector<int>& vct)
{
	vector<int> vct2;
	vector<int> vct3;
	vector<int>::iterator it;
	for (int i = 0; i < vct.size(); i++)
	{
		if (vct[i] == 0)
		{
			vct2.push_back(vct[i]);
		}
		else
			vct3.push_back(vct[i]);
	}
	vct.clear();
	vct.insert(vct.end(), vct2.begin(), vct2.end());
	vct.insert(vct.end(), vct3.begin(), vct3.end());
	
}
int main()
{
	vector<int> v = { 1,0,6,0,2,12,3,0,18,4,5,6 };
	preuredi(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}