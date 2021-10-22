#include <iostream>
using namespace std;
void ArrIn(int* arr, int n) // Unosimo niz
{

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int& ElemRet(int* arr, int trazeni) // Vracamo clan
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
	cout << "Unesite zeljenu velicinu niza: ";
	cin >> n;
	int* arr = new int[n]; // Alociramo memoriju
	cout << "Unesite elemente niza: " << endl;
	ArrIn(arr, n);
	int trazeni;
	cout << endl << "Unesite redni broj elementa kojeg zelite uvecati za 1: ";
	cin >> trazeni;
	while ((trazeni > n) || (trazeni < 0)) //Fail-safe tj provjera da li je uneseni broj jedan od indeksa clanova niza 
	{
		cout << endl << "Unesena vrijednost nije unutar niza!" << endl << "Unesite redni broj elementa kojeg zelite uvecati za 1: ";
		cin >> trazeni;
	}
	trazeni--;
	ElemRet(arr, trazeni) += 1; // Ovdje vracamo odabran n-ti clan uvecan za jedan
	ArrOut(arr, n);
	delete[] arr; // Brisemo memoriju
	return 0;
}