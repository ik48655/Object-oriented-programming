/*Napisati funkciju koja prima string koji se moze sastojati od vise rijeci 
  i vraca string u kojem su rijeci u obratnom poretku i svaka rijec je sortirana 
  po alfabetskom poretku. */
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
string str(string& str)
{
	string tmp = str;
	reverse(tmp.begin(), tmp.end());
	string str1;
	stringstream a(tmp);
	string word;
	while (a >> word)
	{
		sort(word.begin(), word.end());
		str1.append(word);
		str1.append(" ");
	}
	return str1;
}
int main()
{
	string s;
	getline(cin, s);
	cout << "Prvobitni string je: "<< s << endl;
	cout << "Novonastali string je: " << str(s) << endl;
	return 0;
}