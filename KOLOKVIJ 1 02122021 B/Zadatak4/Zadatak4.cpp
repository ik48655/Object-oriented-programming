/*Napisite klasu Path koja predstavlja putanju u koordinatnom sustavu koja kao clanove ima niz tocaka alociran na heapu.
* Implementirajte iduce funkcije:
* top() dohvaca zadnju tocku iz putanje,
* pop() izbacuje zadnju tocku iz putanje,
* push() dodaje tocku u putanju,
* length() racuna ukupnu duljinu putanje.
* Napisite konstruktor, copy i move konstruktor i destruktor. Oznacite const parametre i funkcije, gdje god ima smisla.
* POMOC: Duljina putanje je zbroj udaljenosti dvije susjedne tocke u putanji.
* PRIMJER: Za tocke (1,2),(3,1),(4,2),(5,2),(5,3),(5,4) udaljenost je 6.65
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

class Dot
{
private:
	int x, y;
public:
	Dot(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	const int getX()
	{
		return x;
	}
	const int getY()
	{
		return y;
	}
};

class Path
{
private:
	vector<Dot> p;
public:
	const vector<Dot> getPath()
	{
		return p;
	}
	Dot top()
	{
		return p[-1];
	}
	Dot pop()
	{
		p.pop_back();
	}
	Path push(Dot d1)
	{
		p.push_back(d1);
	}
	Path(vector<Dot> tocka)
	{
		p = tocka;
	}
	double duzina()
	{
		double sum = 0;
		for (int i = 0,j = 1; i < p.size() - 1,j < p.size(); i++,j++)
		{
			sum = sum + sqrt(pow((p[j].getX() - p[i].getX()), 2) + pow((p[j].getY() - p[i].getY()), 2));
			cout << sum << endl;
		}
		return sum;
	}
};
int main()
{
	vector<Dot> tocke = { {1,2},{3,1},{4,2},{5,2},{5,3},{5,4} };
	Path p1(tocke);
	cout << p1.duzina() << endl;
	return 0;
}
