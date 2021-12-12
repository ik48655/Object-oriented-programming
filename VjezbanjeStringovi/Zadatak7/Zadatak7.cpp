/*Napisati funkciju koja provjerava da li string zavrsava sa nekim podstingom.
Primjer: za podstring ".csv" i string "datoteka.csv" funkcija vraca pozitivan
odgovor, a za string "datoteka.cvss" negativan.*/
#include<iostream>
using namespace std;

bool krajpodstring(string &str, string &podstr)
{
	if (str.length() >= podstr.length())
	{
		return(0 == str.compare(str.length() - podstr.length(), podstr.length(), podstr));
	}
	else
		return false;
}
int main()
{
	string str1 = "datoteka.csv";
	string str2 = ".csv";
	string str3 = "datoteka.csvv";
	string str4 = ".csv";
	if (krajpodstring(str3, str4))
	{
		cout << "String sadrzi podstring." << endl;
	}
	else
		cout << "String ne sadrzi podstring." << endl;
	return 0;
}