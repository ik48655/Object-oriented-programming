#ifndef _FUN
#define _FUN
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void timerSet(int& hr, int& min, double& sec);

class timer {
private:
	int h, m;
	double s;
public:
	timer()
	{
		h = 0;
		m = 0;
		s = 0;
	}
	timer(int h1, int m1, double s1)
	{
		h = h1;
		m = m1;
		s = s1;
		timerSet(h, m, s);
	}
	timer(const timer& other)
	{
		h = other.h;
		m = other.m;
		s = other.s;
	}
	timer(timer&& other)
	{
		h = other.h;
		m = other.m;
		s = other.s;

		other.h = 0;
		other.m = 0;
		other.s = 0;
	}
	~timer()
	{
		h = 0;
		m = 0;
		s = 0;
	}

	timer operator=(const timer& time)
	{
		h = time.h;
		m = time.m;
		s = time.s;
		return time;
	}
	timer operator+=(const timer& time)
	{
		h = h + time.h;
		m = m + time.m;
		s = s + time.s;
		timerSet(h, m, s);
		return *this;
	}
	timer operator+(const timer& time)
	{
		h = h + time.h;
		m = m + time.m;
		s = s + time.s;
		timerSet(h, m, s);
		return *this;
	}
	timer operator-=(const timer& time)
	{
		m = 0;
		h = 0;
		s = (s + m * 60 + h * 3600) - (time.s + time.m * 60 + time.h * 3600);
		timerSet(h, m, s);
		return *this;
	}
	timer operator-(const timer& time)
	{
		s = (s + m * 60 + h * 3600) - (time.s + time.m * 60 + time.h * 3600);
		m = 0;
		h = 0;
		timerSet(h, m, s);
		return *this;
	}
	timer operator/=(int a)
	{
		s = (s + m * 60 + h * 3600) / a;
		m = 0;
		h = 0;
		timerSet(h, m, s);
		return *this;
	}
	timer operator/(int a)
	{
		s = (s + m * 60 + h * 3600) / a;
		m = 0;
		h = 0;
		timerSet(h, m, s);
		return *this;
	}
	friend bool operator<(const timer& time, const timer& time2)
	{
		timer t1;
		timer t2;
		t1.s = (time.s + time.m * 60 + time.h * 3600);
		t2.s = (time2.s + time2.m * 60 + time2.h * 3600);
		return (t1.s < t2.s);
	}
	friend ostream& operator<<(ostream& os, const timer& other)
	{
		os << other.h << ":" << other.m << ":" << other.s;
		return os;
	}
	operator double()
	{
		s += m * 60 + h * 360;
		return s;
	}

	int getHours();
	int getMins();
	double getSecs();
	void setHr(int hr);
	void setMin(int min);
	void setSec(double sec);
};

class penalty {
private:
	int h, m;
	double s;
public:
	penalty(double s2)
	{
		h = 0;
		m = 0;
		s = s2;
		timerSet(h, m, s);
	}
	penalty operator()(timer& t)
	{
		int hr = t.getHours();
		int min = t.getMins();
		double sec = t.getSecs() + s;
		timerSet(hr, min, sec);
		t.setHr(hr);
		t.setMin(min);
		t.setSec(sec);
		return *this;
	}
};

#endif