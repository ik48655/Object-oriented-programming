#include "header.h"

int timer::getHours()
{
	return h;
}

void timer::setHr(int hr)
{
	h = hr;
}

int timer::getMins()
{
	return m;
}

void timer::setMin(int min)
{
	m = min;
}

double timer::getSecs()
{
	return s;
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