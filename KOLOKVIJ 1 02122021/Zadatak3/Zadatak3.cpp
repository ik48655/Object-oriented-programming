/*
* Napisati klasu Clock i potrebne funkcije kako bi sljedeci program.
* Oznacite sa const parametre i funkcije, gdje god ima smisla.
* ISPIS : 10:31:00
*/

#include<iostream>
using namespace std; 

class Clock
{
private:
	int h, m, s;
public:
	
	int getH()
	{
		return h;
	}

	int getM()
	{
		return m;
	}

	int getS()
	{
		return s;
	}

	Clock(int h1, int m1, int s1)
	{
		h = h1;
		m = m1;
		s = s1;
	}

	Clock(const Clock& c1)
	{
		h = c1.h;
		m = c1.m;
		s = c1.s;
	}

	Clock& set_clock(const Clock& c1)
	{
		return *this;
	}
	void tick()
	{
		s = s + 1;
		if (m > 59)
		{
			m = 0;
			h++;
		}
		if (s > 59)
		{
			s = 0;
			m++;
		}
	}

	void display()
	{
		
		cout << h << ":" << m << ":" << s << endl;
	}
	
};

int main()
{
	Clock c1(10, 30, 59);
	Clock c2(c1);
	c1.set_clock(c2).tick();
	c1.display();
}