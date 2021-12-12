/*Napisati funkciju koja vra´ca broj znamenki i broj slova u stringu.*/
#include<iostream>
using namespace std;
void brsl_brzn(string str, int& brsl, int& brzn)
{
	int i;
	brsl = 0;
	brzn = 0;
	for (i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			brsl += 1;
		}
		else if (isalnum(str[i]))
		{
			brzn += 1;
		}
	}

}
int main()
{
	string str = "Ovaj string ima 24 slova i 3 broja.\n";
	int br1, br2;
	brsl_brzn(str, br1, br2);
	cout << "Broj slova je: " << br1 << endl;
	cout << "Broj znamenaka je: " << br2 << endl;
	return 0;
}