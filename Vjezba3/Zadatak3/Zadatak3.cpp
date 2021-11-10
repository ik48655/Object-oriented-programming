#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    vector<int> vct = { 2, 22, 33, 27, 7, 1, 78, 11 }; // Hard coded vector

    sort(vct.begin(), vct.end()); // We sort the vector from the beginning to the end

    vct.insert(vct.begin(), 0); // We insert a zero at the beginning of the vector

    int sum = accumulate(vct.begin(), vct.end(), 0); // The range of the sum is from the beginning to the end with the initial sum set to zero.

    vct.insert(vct.end(), sum); // We insert the sum at the end of the vector

    for (int i = 0; i < vct.size(); i++) {
        cout << vct[i] << " ";
    }
}