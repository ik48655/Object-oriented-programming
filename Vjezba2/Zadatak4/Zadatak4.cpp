#include "header.h"
#include <iostream>
using namespace std;
int main()
{
    Vextor mv;
    mv.vector_new(4);

    int m;
    cout << "Enter elements. For exit, enter 0;" << endl;
    cin >> m;
    while (m != 0) // Dok ne unesemo 0 unosimo clanove u niz
    {
        mv.vector_push_back(m);
        cin >> m;
    }

    mv.print_vector();
    cout << "First element: " << mv.vector_front() << endl; // Printamo prvi clan
    cout << "Last element " << mv.vector_back() << endl; // Printamo zadnji clan

    cout << "Size " << mv.vector_size() << endl; // Velicina niza
    cout << "Capacity " << mv.capacity << endl;

    cout << "Last element removed: " << endl; // Niz bez zadnjeg clana

    mv.vector_pop_back();
    mv.print_vector();
    mv.vector_delete();
}