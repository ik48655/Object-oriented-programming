/*Napisati funkciju koja preuredjuje recenicu tako da nakon svakog samoglasnika
doda slovo ’p’ i sam samoglasnik. Realokaciju za dodatne znakove realizirati dinamicki.
Primjer: recenica "Ja sam dobro." postaje "Japa sapam dopo bropo."*/
#include<iostream>
#include<string>
using namespace std;

string preuredi(string str)
{
	string str2;
	for (int i = 0; i < str.length(); i++)
	{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'I')
			{
				str[i+1] = 'p';
			}
		
	}
	return str;
}
int main()
{
	string str = "Ja sam dobro.";
	cout << preuredi(str) << endl;
	return 0;
}