/*Napisati funkciju koja iz datoteke numbers.txt cita prirodne brojeve. Koristeci standardne algoritme:
* 1. baci iznimku ako nema datoteke,
* 2. napuni vektor brojevima iz datoteke,
* 3. prebroji sve brojeve vece od 500
* 4. nadje minimalni i maksimalni element
* 5. iz vektora izbaci brojeve manje od 300,
* 6. preostale brojeve sortiraj silazno
* Za ucitavanje datoteke i ispisivanje na konzolu koristite copy
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

bool veci(int i)
{
	return i > 500; 
}

bool manji(int i) 
{
	return i < 300; 
}

vector<int> read(string name) {
	try {
		ifstream fin(name);
		istream_iterator<string> it(fin);
		istream_iterator<string> eos;
		vector<string> v;
		copy(it, eos, back_inserter(v));

		if (!fin.is_open())
			throw exception();

		vector<int> num;
		;
		for (int i = 0; i < v.size(); i++) {
			int temp = 0;
			stringstream strint(v[i]);
			strint >> temp;
			num.push_back(temp);
		}
		int cnt = count_if(num.begin(), num.end(), veci);
		cout << "Numbers over 500: " << cnt << endl;

		int max = *max_element(num.begin(), num.end());
		cout << "Max value: " << max << endl;

		int min = *min_element(num.begin(), num.end());
		cout << "Min value: " << min << endl;

		num.erase(remove_if(num.begin(), num.end(), manji), num.end());

		sort(num.begin(), num.end(), greater<int>());
		return num;
	}
	catch (exception& e) {
		cerr << "File not found\n";
	}
}

int main() {
	vector<int> v;
	string name = "numbers.txt";
	v = read(name);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	
}