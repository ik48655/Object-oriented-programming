/*Napisati funkciju koja prima string koji se moze sastojati
od vise rijeci i vraca string u kojemu su rijeci u obratnom
poretku i svaka rijec je sortirana po alfabetu*/
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
string okrenistr(string str)
{
    string str1 = str;
    reverse(str1.begin(), str1.end());
    string str2;
    stringstream a(str1);
    string word;

    while (a>>word)
    {
        sort(word.begin(), word.end());
        str2.append(word);
        str2.append(" ");
    }
    return str2;
}

int main()
{
    string s;
    getline(cin, s);
    cout << "Originalni string je: " << s << endl;
    cout << okrenistr(s);
    return 0;
}