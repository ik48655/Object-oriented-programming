#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
    int n, i;
    vector<int> myVector;

    cout << "Unesite broj elemenata u vektoru: ";
    cin >> n;

    cout << "Unesite elemente u vektor:" << endl;
    vctinp(myVector, n);

    cout << "Unesite indeks element koji zelite ukloniti iz vektora: ";
    cin >> i;

    vctdel(myVector, i);

    cout << "Trenutni vektor sadrzi elemente:" << endl;
    vctprint(myVector);
}