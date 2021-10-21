#include <iostream>
using namespace std;

void input(int* arr, int arrsize)
{
    int i=0;
    for (i; i < arrsize; i++) // Dok god nam je i manji od broja clanova koje smo unijeli, unosimo clanove niza u zadati niz //
    {
        cout << i << "-ti clan niza je: "<< endl;
        cin >> arr[i];
    }
}
/*
void maxmin(int *niz, int *max1, int *min1, int n)
{
    int i;
    *max1 = niz[0];
    *min1 = niz[0];
    for (i = 0; i <= n; ++i)
    {
        if (niz[i] > *max1)
            *max1 = niz[i];
        if (niz[i] < *max1)
            *min1 = niz[i];
    }
}
*/
void smallest(int* arr, int* min, int arrsize)
{
    int i;
    *min = arr[0]; //Postavljamo minimum eg. najmanji clan niza na prvi clan([0]) //
    for (i = 0; i <= arrsize; i++)
    {
        if (arr[i] < *min) // Ako nam je i-ti clan manji od maksimuma odnosno arr[0], taj clan postaje novi najmanji clan tj minimum //
            *min = arr[i];
    }
}
void biggest(int* arr, int* max, int arrsize)
{
    int i;
    *max = arr[0]; //Postavljamo maksimum eg. najveci clan niza na prvi clan([0]) //
    for (i = 0; i <= arrsize; i++)
    {
        if (arr[i] > *max) // Ako nam je i-ti clan veci od maksimuma odnosno arr[0], taj clan postaje novi najveci clan tj maksimum //
            *max = arr[i];
    }
}
int main()
{
    int big, small, velniza, *niz;
    cout << "Unesite velicinu vaseg niza: " << endl;
    cin >> velniza;
    niz = (int*)malloc(velniza * sizeof(int)); // Alociramo memoriju za nas niz //
    input(niz, velniza);
    biggest(niz, &big, velniza - 1);
    smallest(niz, &small, velniza - 1);
    cout << "Najveci clan u nizu je:  " << big << endl;
    cout << "Najmanji clan u nizu je: " << small << endl;
    free(niz); // Po zavrsetku oslobadjamo memoriju koju smo prethodno "rezervirali" za nas niz //
}