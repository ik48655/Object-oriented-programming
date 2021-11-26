#include <iostream>
#include "header.h"
#include <random>
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

void Point::dotset(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point::randdot()
{
	double ll, ul;
	cout << "Lower interval limit: " << endl;
	cin >> ll;
	cout << "Upper interval limit: " << endl;
	cin >> ul;
	srand(time(NULL));

	x = ll + (rand()) / ((RAND_MAX / (ul - ll)));
	y = ll + (rand()) / ((RAND_MAX / (ul - ll)));
	z = ll + (rand()) / ((RAND_MAX / (ul - ll)));
}

void Point::dotget(double& x, double& y, double& z) const
{
	x = this->x;
	y = this->y;
	z = this->z;
}

float Point::dist2d(Point& first, Point& second) const
{
	return sqrt(pow((second.x - first.x), 2) + pow((second.y - first.y), 2));
}
float Point::dist3d(Point& first, Point& second) const
{
	sqrt(pow((second.x - first.x), 2) + pow((second.y - first.y), 2)+ pow((second.z - first.z), 2));
}

bool Target::hitreg(Weapon weapon, Point llf, Point urb)
{
	return (weapon.position.z >= llf.z && weapon.position.z <= urb.z);
}

