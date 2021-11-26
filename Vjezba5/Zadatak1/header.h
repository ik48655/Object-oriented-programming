#include <iostream>

class Point
{
	double x, y, z;

	void input();
	void randdot();
	void dotprint();
	void dist2d();
	void dist3d();
};
class Weapon
{
	Point position;
	int magstate;
	int magsize;
	void Reload();
	void Shoot();
}

