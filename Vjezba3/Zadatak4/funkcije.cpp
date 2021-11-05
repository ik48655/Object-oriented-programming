#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"
using namespace std;

void vctinp(vector<int>& niz, int nrelem)
{
    int unos;
    for (int i = 0; i < nrelem; i++)
    {
        cin >> unos;
        niz.push_back(unos);
    }
}

void vctdel(std::vector<int>& vect, int i) {
    swap(vect[i], vect.back());
    vect.pop_back();
}

void vctprint(vector<int>& niz)
{
    for (int i = 0; i < niz.size(); i++)
    {
        cout << niz[i] << endl;
    }
}