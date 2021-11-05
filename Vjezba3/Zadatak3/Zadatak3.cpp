#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> vct = { 2, 22, 33, 27, 7, 1, 78, 11 };

    sort(vct.begin(), vct.end());

    vct.insert(vct.begin(), 0);

    int sum = accumulate(vct.begin(), vct.end(), 0);

    vct.insert(vct.end(), sum);

    for (int i = 0; i < vct.size(); i++) {
        cout << vct[i] << " ";
    }
}