#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

int main()
{
    int vel1, veln, a, b; // First vector size, new vector size, interval start, interval end
    vector <int> vc1, vc2, nvc; // First vector, second vector , newly formed vector

    cout << "Unesite velicinu niza:" << endl; // We input the size of the first vector
    cin >> vel1;

    cout << "Unesite clanove niza:" << endl; // We input the "array" members into the vector
    vctinp(vc1, vel1); // Function call

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
    veln = nvc.size();
    cout << "Clanovi prvog vektora koji nisu u drugom" << endl;
    vctprint(nvc, veln);
}