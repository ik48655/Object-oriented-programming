/*Napisati funkciju koja ce iz stringa koji predstavlja url izvuci (i vratiti) url roota (bez oznake protokola).
Primjer: za url http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt adresa root-a je www.hackcanada.com.*/
#include<iostream>
#include<string>
using namespace std;
string vratiroot(string str)
{
	string str2;
	size_t pos = str.find("//") + 2;
	size_t pos2 = str.find(".com")-3;
	str2 = str.substr(pos, pos2);
	return str2;
	
}
int main()
{
	string str1 = "http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";
	cout << "Root linka je : " << vratiroot(str1) << endl;
	return 0;
}