/*Za zadanu klasu
* napisite operator- (vraca centralno simetricnu tocku) kao funkciju clan i operator
* << kao globalnu funkciju koja ispisuje tocku u obliku (x,y)
* PRIMJER: Za tocku (2,-3) centralno simetrica tocka je (-2,3)
*/
#include<iostream>
#include<ostream>
#include<vector>
#include<algorithm>
using namespace std;

class point
{
	int x, y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	point operator-(point const& p)
	{
		point res;
		res.x = p.y;
		res.y = p.x;
		return res;
	}
	friend ostream& operator<<(ostream& os, const point& p);
};

ostream& operator<<(ostream& os, const point& p)
{
	os << "(" << p.x << "," << p.y << ")" << endl;
	return os;
}

int main()
{
	point p(2, -3);
	point p2;
	point p3 = p2 - p;
	cout << p3;
	cout << p;
	return 0;
}