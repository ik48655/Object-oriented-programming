/*Dan je string u kojem su svi samoglasnici zamjenjeni znakom "*"
i drugi u kojem su zamjenjeni samoglasnici. Napisite funkciju 
koja ce koristeci funkcije stringa find i replace, zamjeniti 
zvjezdice pripadajucim samoglasnicima. */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void zamjeni(string& str, string vowels)
{
	string::iterator pos = find(str.begin(), str.end(),'*');
	int i = 0;
	while (pos != str.end())
	{
		str.replace(--pos, ++pos, 1, vowels[i]);
		i++;
		pos = find(str.begin(), str.end(), '*');
	}
}

int main()
{
	string str1 = "h*ll* w*rld";
	string vow1 = "eoo";
	string str2 = "b*tt*r l*t* th*n n*v*r";
	string vow2 = "eeaeaee";
	string str3 = "pr*ct*c* m*k*s p*rf*ct";
	string vow3 = "aieaeee";
	zamjeni(str1, vow1);
	cout << str1 << endl;
	zamjeni(str2, vow2);
	cout << str2 << endl;
	zamjeni(str3, vow3);
	cout << str3 << endl;
	return 0;
}