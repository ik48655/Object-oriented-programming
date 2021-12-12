/*Dan je string u kojem su svi samoglasnici zamjenjeni znakom "*" i drugi
* u kojem su zamjenjeni samoglasnici. Napisite funkciju koja ce koristeci funkcije
* stringa find i replace, zamjeniti zvjezdice pripadajucim samoglasnicima. */
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
void zamjeni(string& str, string samogl)
{
	auto pos = find(str.begin(), str.end(), '*');
	int i = 0;
	while (pos != str.end())
	{
		str.replace(--pos, ++pos, 1, samogl[i]);
		i++;
		pos = find(str.begin(), str.end(), '*');
	}

}
int main()
{
	string s = "H*ll* w*rld";
	string smgl = "eoo";
	cout << "Prvobitni string je: "<< s << endl;
	zamjeni(s, smgl);
	cout << "Izmjenjeni string je: " << s << endl;
	return 0;
}