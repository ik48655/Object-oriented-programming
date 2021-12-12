/*Napisati funkciju koja ispituje jesu li dvije rijeci anagrami (jedna rijec je permutirana druga rijec).
Primjer: rijeci "vatra", "trava" i "vrata" su anagrami.*/
#include<iostream>
#include<algorithm>
using namespace std;
int anagram(string& str1, string& str2)
{
	if ((str1.length() > str2.length()) || (str1.length() < str2.length()))
	{
		return 0;
	}
	else
	{
		str1[0] = tolower(str1[0]);
		str2[0] = tolower(str2[0]);
		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());
		if (str1 == str2)
		{
			return 1;
		}
	}
}
int main()
{
	string str1 = "Vatra";
	string str2 = "vrata";
	string str3 = "trava";
	string str4 = "vrat";
	if (anagram(str1, str2))
	{
		cout << "Stringovi su anagrami.\n";
	}
	else
	{
		cout << "Stringovi nisu anagrami.\n";
	}
	if (anagram(str2, str3))
	{
		cout << "Stringovi su anagrami.\n";
	}
	else
	{
		cout << "Stringovi nisu anagrami.\n";
	}
	if (anagram(str1, str3))
	{
		cout << "Stringovi su anagrami.\n";
	}
	else
	{
		cout << "Stringovi nisu anagrami.\n";
	}
	if (anagram(str1, str4))
	{
		cout << "Stringovi su anagrami.\n";
	}
	else
	{
		cout << "Stringovi nisu anagrami.\n";
	}
	return 0;
}
