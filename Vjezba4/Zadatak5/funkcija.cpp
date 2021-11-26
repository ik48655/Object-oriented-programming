#include<iostream>
#include "header.h"
using namespace std;
void matchsticks()
{
    int m = 21, p, c;
    while (1)
    {
        cout << "Number of matchsticks left: " << m << endl;
        cout << "Pick 1 or 2 or 3 matches." << endl;
        cin >> p;
        if (p < 1 || p>3)
        {
            cout << "Invalid number of matchsticks taken." << endl;
        }
        else
        {
            m = m - p;

            cout << "Number of matches left = " << m << endl;

            c = 4 - p;

            cout << "The computer picked up " << c << " matchsticks" << endl;

            m = m - c;

            if (m == 1)
            {
                cout << "\nNumber of matches left = " << m << endl;
                cout << "You lost the Game." << endl;
                break;
            }
        }
    }
}