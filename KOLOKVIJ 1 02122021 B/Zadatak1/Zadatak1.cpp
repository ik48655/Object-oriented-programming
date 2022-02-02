/*Dan je string u kojem su svi samoglasnici zamjenjeni znakom "*" i drugi
* u kojem su zamjenjeni samoglasnici. Napisite funkciju koja ce, koristeci funkcije
* stringa find i replace, zamjeniti zvjezdice pripadajucim samoglasnicima.
* h*ll* w*rld, eoo ------------------> hello world
* b*tt*r l*t* th*n n*v*r, eeaeaee ---> better late than never
* pr*ct*c* m*k*s p*rf*ct, aieaeee ---> practice makes perfect
*/
#include<iostream>
using namespace std;

void promjeni(string& str, string vowels)
{
	auto pos = find(str.begin(), str.end(), '*');
	int i = 0;
	while (pos != str.end())
	{
		str.replace(--pos,++pos,1, vowels[i]);
		i++;
		pos = find(str.begin(), str.end(), '*');
	}
}
int main()
{
	string str = "h*ll* w*rld";
	string sam = "eoo";
	promjeni(str, sam);
	cout << str << endl;
	return 0;
}