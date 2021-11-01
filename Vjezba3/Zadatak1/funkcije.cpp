#include "header.h"
using namespace std;
void vctinp(vector<int> &niz, int nrelem)
{
    int i;
    int unos;
    for (i = 0; i < nrelem; i++)
    {
        cin >> unos;
        niz.push_back(unos);
    }
}
void vctinp2(vector<int> &niz, int int_p, int int_k)
{
    int unos;
    cin >> unos;
    while ((unos > int_p) && (unos < int_k))
    {
        niz.push_back(unos);
        cin >> unos;
    }
}
void vctprint(vector<int> &niz) // Printa vektor
{
    int i;
    for (i = 0; i < niz.size(); i++)
    {
        cout << niz[i] << endl;
    }
}