/*Napisati funkciju koja provjerava je li uneseni string broj i ako je, izracuna prosjecnu vrijednost parnih i neparnih znamenaka.*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int prosjvr(string str, int& prosjpr, int& prosjnpr)
{
	prosjpr = 0, prosjnpr = 0;
	int brpr = 0, brnpr = 0;
	int brzn = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
		{
			brzn += 1;
		}
	}
	if (brzn == str.length())
	{
		int str2 = stoi(str);
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] % 2 == 0)
			{
				brpr += 1;
				prosjpr += str[i];
			}
			else
			{
				brnpr += 1;
				prosjnpr += str[i];
			}
		}
		prosjpr = prosjpr / brpr - '0';
		prosjnpr = prosjnpr / brnpr - '0';
	}
	else
		return 0;
}
int main()
{
	int brpr1, brnpr1;
	string str1 = "abc1235";
	string str2 = "123456";
	string str3 = "aabve0";
	string str4 = "abdef";
	//prosjvr(str1, brpr1, brnpr1);
	prosjvr(str2, brpr1, brnpr1);
	//prosjvr(str3, brpr1, brnpr1);
	//prosjvr(str4, brpr1, brnpr1);
	if (prosjvr)
	{
		cout << "Uneseni string je broj.\n";
		cout << "Prosjecna vrijednost parnih znamenki je: " << brpr1 << endl;
		cout << "Prosjecna vrijednost neparnih znamenki je: " << brnpr1 << endl;
	}
	else
	{
		cout << "Uneseni string nije broj.\n";
	}
	return 0;
}