#include <iostream>
using namespace std;
void ArrIn(int* arr, int n) // Unos niza
{

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int& ElemRet(int* arr, int trazeni) // Vraca clan
{

	return (arr[trazeni]);
}
void ArrOut(int* arr, int n) // Printanje niza
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int n;
	cout << "Unesite zeljenu velicinu niza: ";												// Unaprijed definiramo velicinu niza
	cin >> n;
	int* arr = new int[n];																	// Alociramo memoriju
	cout << "Unesite elemente niza: " << endl;
	ArrIn(arr, n);																			// Unosimo clanove niza
	int trazeni;
	cout << endl << "Unesite redni broj elementa kojeg zelite uvecati za 1: ";				// Trazimo n-ti clan koji uvecamo za jedan
	cin >> trazeni;
	while ((trazeni > n) || (trazeni < 0))													//Fail-safe tj provjera da li je uneseni broj jedan od indeksa clanova niza 
	{
		cout << endl << "Unesena vrijednost nije unutar niza!" << endl << "Unesite redni broj elementa kojeg zelite uvecati za 1: ";
		cin >> trazeni;
	}
	trazeni--;
	ElemRet(arr, trazeni) += 1;																// Povratna vrijednost tj. lvalue se uvecava za jedan
	ArrOut(arr, n);																			// Printamo "novonastali"/izmjenjeni niz u kojem je n-ti clan uvecan za jedan
	delete[] arr;																			// Brisemo memoriju
	return 0;
}