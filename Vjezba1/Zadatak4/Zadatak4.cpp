#include <iostream>
#include <iomanip>
using namespace std;

void input(int* arr, int arrsize)
{
    int i = 0;
    for (i; i < arrsize; i++) // Dok god nam je i manji od broja clanova koje smo unijeli, unosimo clanove niza u zadati niz //
    {
        cout << i << "-ti clan niza je: " << endl;
        cin >> arr[i];
    }
}

int smallest(int* arr, int size, int min)
{
    if (min > arr[size]) // Isto kao i u zadatku 3, gledamo da li nam je trenutni clan veci od minimuma i ako jest, postavljamo njega kao novi minimum //
        min = arr[size];
    if (size == 0)
        return min;
    smallest(arr, size - 1, min);
}

int biggest(int* arr, int size, int max)
{
    if (max < arr[size]) // Isto kao i u zadatku 3, gledamo da li nam je trenutni clan manji od maksimuma i ako jest, postavljamo njega kao novi maksimum //
        max = arr[size];
    if (size == 0)
        return max;
    biggest(arr, size - 1, max);
}

int main()
{
    int big, smol, arrsize, *arr;
    cout << "Unesite broj clanova niza: ";
    cin >> arrsize;

    arr = new int[arrsize];
    input(arr, arrsize);

    big = arr[arrsize - 1];
    smol = arr[arrsize - 1];

    big = biggest(arr, arrsize - 1, big);
    smol = smallest(arr, arrsize - 1, smol);

    cout << "\nNajveci broj: " << big << "\nNajmanji broj: " << smol;
    delete[] arr;
}