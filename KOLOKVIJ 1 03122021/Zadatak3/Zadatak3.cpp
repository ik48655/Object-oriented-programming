/*
* Prosirite klasu Domino kako bi sljedeci program ispravno radio.
* Pretpostavka je da se plocica stavlja samo na kraj reda domina. Nije
* potrebno provjeravati duplikate.
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Domino
{
private:
	int left, right;
public:
	Domino()
	{
		left = 1;
		right = 1;
	}
	Domino(int l, int r)
	{
		left = l;
		right = r;
	}
	Domino(const Domino& d1)
	{
		left = d1.left;
		right = d1.right;
	}
	Domino(Domino&& d1)
	{
		left = d1.left;
		right = d1.right;

		d1.left = 0;
		d1.right = 0;
	}
	Domino& generate()
	{
		left = 0 + (rand() % 6);
		right = 0 + (rand() % 6);
		return *this;
	}
	Domino& flip()
	{
		int temp;

		temp = left;
		left = right;
		right = temp;

		return *this;
	}
	bool match(Domino d1)
	{
		if ((d1.left == left) && (d1.right == right))
		{
			return true;
		}
		else
			return false;
	}
	void print()
	{
		cout << "Left field is: " << left << "  Right field is: " << right << endl;
	}
};

int main()
{
	vector<Domino> v{ {0,1},{1,3},{3,4} };
	Domino d, d2(v.back());
	while (1)
	{
		d.generate().print();
		if ( d.match(d2) || d.flip().match(d2) )
		{
				d.print();
				break;

		}
	}
}