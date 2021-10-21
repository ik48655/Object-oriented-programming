#include <iostream>
using namespace std;
void ArrIn(int* arr, int sizearr) // Unosimo niz
{
	for (int i = 0; i < sizearr; i++)
	{
		cin >> arr[i]; // Unosimo clanove jedan po jedan
	}
}
void MinAndMax(int* arr, int sizearr, int& smol, int& bigg) // Trazimo najveci i najmanji clan niza
{
	for (int i = 0; i < sizearr; i++)
	{
		if (arr[i] < smol)
		{
			smol = arr[i]; // Smol nam je referenca na i-ti clan u nizu, odnosno smol nam je referenca na najmanji clan u nizu
		}
		else if (arr[i] > bigg)
		{
			bigg = arr[i]; // Big nam je referenca na i-ti clan u nizu, odnosno big nam je referenca na najveci clan u nizu
		}
	}
}
int main()
{
	int small,big, n;
	cout << "Unesite zeljenu velicinu niza: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Unesite elemente niza: \n";
	ArrIn(arr, n);
	small= big = arr[0];
	MinAndMax(arr, n, small,big);
	cout << "Najmanji clan niza je: \n" << small;
	cout << "\nNajveci clan niza je: \n" << big;
	delete[] arr;
	return 0;
}