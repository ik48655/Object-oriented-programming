/*Napisati funkciju koja prima string koji se moze sastojati od vise rijeci i vraca string
* u kojemu su rijeci u obratnom poretku i svaka rijec je sortirana po alfabetu.
* hello word -------------------> dlorw ehllo
* better late than never -------> eenrv ahnt aelt beertt
* practice makes perfect -------> ceefprt aekms acceiprt
*/

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cstring>

using namespace std;

string funkcija(string str)
{
	reverse(str.begin(), str.end());
	stringstream s(str);
	string word;
	while (s >> word)
		sort(word.begin(), word.end());

	return str;
}

int main()
{
	string s = "Hello world";
	cout << funkcija(s) << endl;
	return 0;
}