/*
* Napisati klasu MinArray ciji je clan niz alociran na heapu, takav da je u
* njemu minimalni element uvijek na pocetku niza (niz nije sortiran). Napisite
* potrebne clanove i implementirajte iduce funkcije:
* front() dohvaca minimalni element
* push() dodaje element u niz
* minify() preslozi niz tako da je minimum na prvom mjestu
* Napisite konstruktor, copy i move kontstruktor i destruktor. Oznacite sa
* const parametre i funkcije, gdje god ima smisla
* Razdvojite interface i implementaciju u header i source datoteke.
*/

#include<iostream>
#include<vector>
#include<algorithm>

#define SIZE 10
using namespace std;

class MinArray
{
private:
	vector<int> v;
public:
	MinArray(int size = SIZE)
	{
		v.reserve(size);
	}
	MinArray(const MinArray& ma1)
	{
		v = ma1.v;
	}
	MinArray(MinArray&& ma2)
	{
		v = ma2.v;
		ma2.v.clear();
	}
	~MinArray()
	{
		v.clear();
	}
	int front()
	{
		return v[0];

	}
	void push(int n)
	{
		v.push_back(n);
	}
	void minify()
	{
		sort(v.begin(), v.end());
	}
	void print()
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << endl;
		}
	}
};
int main()
{
	MinArray m1(6);

	m1.push(10);
	m1.push(29);
	m1.push(-13);
	m1.push(1642);
	m1.push(-138);
	m1.push(0);
	
	m1.print();
	cout << endl;
	m1.minify();

	m1.print();
	cout << endl;
	cout << m1.front() << endl;

	return 0;
}