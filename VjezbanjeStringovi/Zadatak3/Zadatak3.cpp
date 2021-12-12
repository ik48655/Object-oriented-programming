/*Napisati funkciju koja modificira string tako da izbaci sve samoglasnike iz njega.
Primjer: "Popokatepetl" postaje "Ppktptl".*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string removevow(string& str)
{
	vector<char> vowels = { 'a','e','i','o','u','A','E','I','O','U' };
	for (int i = 0; i < str.length(); i++)
	{
		if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
		{
			str = str.replace(i, 1, "");
			i -= 1;
		}
	}
	return str;
}

int main()
{
	string str1 = "Popokatepetl";
	string str2 = "Aerodrom";
	cout << "String: " << str1 << " bez samoglasnika izgleda: " << endl;
	cout << removevow(str1) << endl;
	cout << "String: " << str2 << " bez samoglasnika izgleda: " << endl;
	cout << removevow(str2) << endl;
	return 0;
}