#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
    int vel1, vel2, a, b;
    vector <int> vc1, vc2, nvc;

    cout << "Unesite velicinu niza:" << endl;
    cin >> vel1;

    cout << "Unesite clanove niza:" << endl;
    vctinp(vc1, vel1);

    cout << "Unesite interval raspona brojeva za niz:" << endl;
    cin >> a;
    cin >> b;

    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    cout << "Unesite clanove niza:" << endl;
    vctinp2(vc2, a, b);
    nvc = prviprdrugi(vc1, vc2);
    vel2 = nvc.size();
    cout << "Clanovi prvog vektora koji nisu u drugom" << endl;
    vctprint(nvc, vel2);
}