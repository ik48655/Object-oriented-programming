#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void rvrsortstr(vector<string>& strniz) {
    string s1;
    int i = 0, n;
    cout << "Unesite rijeci\n";
    while (cin >> s1) {
        n = s1.size();
        for (int i = 0; i < n / 2; i++) {
            swap(s1[i], s1[n - i - 1]);
        }
        strniz.push_back(s1);
    }
    sort(strniz.begin(), strniz.end());
}

void vctprint(vector<int>& niz)
{
    for (int i = 0; i < niz.size(); i++)
    {
        cout << niz[i] << endl;
    }
}

int main()
{
    vector<string> str;
    rvrsortstr(str);
    vctprint(str);
}