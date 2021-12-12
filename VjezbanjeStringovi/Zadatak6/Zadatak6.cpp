/*Napisati funkciju koja prima tri stringa, te vraca novi string koji je rezultat spajanja dva dulja stringa.*/
#include<iostream>
using namespace std;
string spojinajdulje(string str1, string str2, string str3)
{
	int len1 = str1.length(), len2 = str2.length(), len3 = str3.length();
	if (len1 >= len2 && len1 >= len3)
	{
		if (len2 >= len3)
		{
			return str1 + str2;
		}
		else
		{
			return str1 + str3;
		}
	}
	else if (len2 >= len1 && len2 >= len3)
	{
		if (len1 >= len3)
		{
			return str2 + str1;
		}
		else
		{
			return str2 + str3;
		}
	}
	else if(len3>=len1 && len3>=len2)
	{
		if (len1 >= len2)
		{
			return str3 + str1;
		}
		else
		{
			return str3 + str2;
		}
	}

}

int main()
{
	string str1 = "abcdef";
	string str2 = "abcdefg";
	string str3 = "abcde";
	string str4 = "jabuka";
	string str5 = "mandarina";
	string str6 = "naranca";
	string str7 = "auto";
	string str8 = "bus";
	string str9 = "motor";
	cout << "Spojena dva najdulja stringa su: " << spojinajdulje(str1, str2, str3) << endl;
	cout << "Spojena dva najdulja stringa su: " << spojinajdulje(str4, str5, str6) << endl;
	cout << "Spojena dva najdulja stringa su: " << spojinajdulje(str7, str8, str9) << endl;
	return 0;
}