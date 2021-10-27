#include <iostream>
using namespace std;
void ArrIn(int* arr, int sizearr) // Unoos niza
{
	for (int i = 0; i < sizearr; i++)
	{
		cin >> arr[i]; // Unos clanova jedan po jedan
	}
}
void MinAndMax(int* arr, int sizearr, int& smol, int& bigg) // Trazenje najveceg i najmanjeg clan niza
{
	for (int i = 0; i < sizearr; i++)
	{
		if (arr[i] < smol)
		{
			smol = arr[i]; // Smol nam je referenca na i-ti clan u nizu, odnosno referenca na najmanji clan u nizu
		}
		else if (arr[i] > bigg)
		{
			bigg = arr[i]; // Big nam je referenca na i-ti clan u nizu, odnosno referenca na najveci clan u nizu
		}
	}
}
int main()
{
	int small,big, n;
	cout << "Unesite zeljenu velicinu niza: ";							// Unos velicine
	cin >> n;
	int* arr = new int[n];
	cout << "Unesite elemente niza: \n";								// Unos niza
	ArrIn(arr, n);														// Funkcija za unos
	small= big = arr[0];												// Postavljanje najveceg i najmanjeg na nulti clan
	MinAndMax(arr, n, small,big);										// Poziv funkcije za pronalazak najveceg/najmanjeg
	cout << "Najmanji clan niza je: \n" << small;						// Ispis najmanjeg
	cout << "\nNajveci clan niza je: \n" << big;						// Ispis najveceg
	delete[] arr;														// Brisanje niza tj clanova jedan po jedan
	return 0;
}