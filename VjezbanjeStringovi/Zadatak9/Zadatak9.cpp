/*Napisati funkciju koja alocira prostor za string, te generira niz znakova 
duljine n tako da se isti znak nikada ne ponavlja. Znakovi mogu biti velika
slova alfabeta. Funkcija vraca novonastali string.*/
#include<iostream>
#include<ctime>
#include<cmath>
#include<vector>
using namespace std;
void alociraj()
{
	srand(time(NULL));
	int n = rand() % 26;
	char slova[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char* str = new char[n+1];
	for (int i = 0; i < n; i++)
	{
		str[i] += slova[rand() % n];
	}
	str[n+1] = '\0';
	cout << str << endl;
}
int main()
{
	cout << "String n duzine od generiranih znakova je: " << endl;
	alociraj();
	return 0;
}