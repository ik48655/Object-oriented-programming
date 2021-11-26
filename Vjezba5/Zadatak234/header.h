#include <iostream>
#include <random>

class Point
{
public:
	double x, y, z;
	void dotset(double x, double y, double z);
	void randdot();
	void dotget(double& x, double& y, double& z) const;
	float dist2d(Point& first, Point& second) const;
	float dist3d(Point& first, Point& second) const;
};
class Weapon
{
public:
	Point position;
	int magstate = 30;
	int magsize = 30;
	void Reload(void)
	{
		magstate = magsize;
	}
	void Shoot(void)
	{
		--magsize;
	}
};

class Target
{
public:
	Point llf;
	Point lrf;
	Point ulf;
	Point urf;

	Point llb;
	Point lrb;
	Point ulb;
	Point urb;

	void targetcoord(Point& lowerleft, Point& upperright)
	{
		double x1, y1, z1, x2, y2, z2;

		lowerleft.dotset(x1, y1, z1);
		llf.dotget(x1, y1, z1);

		upperright.dotset(x2, y2, z2);
		urb.dotget(x2, y2, z2);

		lrf.dotset(x2, y1, z1);
		urf.dotset(x2, y2, z2);
		ulf.dotset(x1, y1, z2);

		llb.dotset(x1, y2, z1);
		lrb.dotset(x2, y2, z1);
		ulb.dotset(x1, y2, z2);


	}
	bool hitreg(Weapon weapon, Point llf, Point urb);
};
