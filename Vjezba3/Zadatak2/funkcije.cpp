#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

void vctinp(vector<int>& vect, int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vect.push_back(num);
    }
}

void vctinp2(vector<int>& vect, int a, int b) {
    int num = 0;
    cin >> num;
    while ((num > a) && (num < b)) {
        vect.push_back(num);
        cin >> num;
    }
}

vector<int> prviprdrugi(vector<int> first, vector<int> second)
{
    int num;
    int n = first.size();
    vector <int> myVect;
    for (int i = 0; i < n; i++) {
        if (!(find(second.begin(), second.end(), first[i]) != second.end())) {
            myVect.push_back(first[i]);
        }
    }
    return myVect;
}

void vctprint(vector<int> vect, int n) {
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }
}