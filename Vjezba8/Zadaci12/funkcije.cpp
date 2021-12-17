#include "header.h"

int timer::getHours()
{
	return h;
}

int timer::getMins()
{
	return m;
}

double timer::getSecs()
{
	return s;
}

void timer::setHr(int hr)
{
	h = hr;
}

void timer::setMin(int min)
{
	m = min;
}

void timer::setSec(double sec)
{
	s = sec;
}

void timerSet(int& hr, int& min, double& sec)
{
	if (sec >= 60)
	{
		while (sec >= 60)
		{
			sec -= 60;
			min++;
		}
	}
	if (min > 59)
	{
		hr += min / 60;
		min %= 60;
	}
}