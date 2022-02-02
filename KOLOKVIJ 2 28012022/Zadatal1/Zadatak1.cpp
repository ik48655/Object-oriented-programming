/*Napisite klasu Player koji ima privatne clanove name i score. Napisite potrebne funkcije tako da sljedeci program pravilno radi
* i ispisuje poruku:
* "Jon won 30pts"
*/

#include<iostream>
using namespace std;

class Player
{
protected:
	string name;
	int score;
public:
	Player();
	Player(string nm, int sc)
	{
		name = nm;
		score = sc;
	}
	Player(string nm)
	{
		name = nm;
		score = 0;
	}
	Player operator+(int n)
	{
		score = score + n;
		return *this;
	}
	friend bool operator>(const Player& p1, const Player& p2);
	friend ostream& operator<<(ostream& os, const Player& p);
};
bool operator>(const Player& p1, const Player& p2)
{
	return p1.score > p2.score ;
}
ostream& operator<<(ostream& os, const Player& p)
{
	os << p.name << " won " << p.score << " pts" << endl;
	return os;
}
int main()
{
	Player p1("John", 10), p2("Jon", 10);
	p2 = p2 + 20;
	if (p1 > p2)
		cout << p1;
	else
		cout << p2;
}