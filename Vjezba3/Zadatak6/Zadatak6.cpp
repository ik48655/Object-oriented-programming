#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void rvrsortstr(vector<string>& strniz)
{
    string s1;
    int i = 0, n;
    cout << "Unesite rijeci\n";
    while (cin >> s1) // While input isn't CTRL + Z
    {
        n = s1.size(); // n is size of string
        for (int i = 0; i < n / 2; i++) // while counter isn't counter divided by two
        {
            swap(s1[i], s1[n - i - 1]); // We swap the last letter with the first letter 
        }
        strniz.push_back(s1); // We add the reversed word to the back of the vector
    }
    sort(strniz.begin(), strniz.end()); // We sort the vector from beginning to end
}

void vctprint(vector<int>& niz) // Printing the vector 
{
    for (int i = 0; i < niz.size(); i++) // We print while the counter is smaller than the size of the vector
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