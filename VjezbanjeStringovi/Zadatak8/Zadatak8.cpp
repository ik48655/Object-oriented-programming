/*Napisati funkciju koja preuredjuje string tako da svako veliko slovo udvostruci, a mala slova izbaci. Sve druge znakove ostavi.
Primjer: za string "ONoffON" promijenjeni string je "OONNOONN".*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string promjeni(string& str)
{
	transform(str.begin(), str.end(), [](unsigned char c) { return toupper(c); });

}
int main()
{
	string str1 = "ONoffON";
	cout << "Originalni string: " << str1 << endl;
	cout << "Izmjenjeni string: " << promjeni(str1) << endl;
	return 0;
}