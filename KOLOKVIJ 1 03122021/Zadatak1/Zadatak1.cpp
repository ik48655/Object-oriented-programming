/*
* Napisati funkciju koja prima string i provjerava je li to validna email adresa. Vrijede pravila:
* string mora imati tocno jedan znak '@'
* s desne strane znaka '@' mora biti barem jedna tocka, i to ne odmah pored znaka '@'
* s lijeve strane znaka '@' mora se nalaziti barem jedan znak alfabeta ili broj
* s obje strane tocke mora biti jedan znak alfabeta ili broj
* Za pretragu stringa koristiti find funkcije stringa, te globalne funkcije iz algorithm
* aaa@gmail ------------------> FALSE
* aaa@gmail.com --------------> TRUE
* aaa@gmail@com --------------> FALSE
* @gmail.com -----------------> FALSE
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool email(string str)
{
	string sub = "@";
	
	int brmnk = count(str.begin(), str.end(), '@');
	if (brmnk > 1 || brmnk < 1)
		return 0;

	int len = str.length();
	int pos = str.find(sub);

	string a = str.substr(0, pos);
	string b = str.substr(pos+1, len);

	int cnt1 = 0;
	if (a.length() == 0)
		return false;
	else
		for (int i = 0; i < a.length(); i++)
		{
			if (isalpha(a[i]) || isdigit(a[i]))
			{
				cnt1++;
			}
		}

	int brtck = count(str.begin(), str.end(), '.');
	if (brtck < 1)
		return false;

	int cnt2 = 0;
	if (b[0] == '.' || b.length()==0)
		return false;
	else
		for (int i = 0; i < b.length(); i++)
		{
			if (isalpha(b[i]) || isdigit(b[i]))
			{
				cnt2++;
			}
		}
	if (cnt1 == 0 || cnt2 == 0)
		return false;
}

int main()
{
	string str = "aaa@gmail.com";
	if (email(str))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}