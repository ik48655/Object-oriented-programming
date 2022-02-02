/*Napisati klasu Rectangle u kojoj su tri privatna clana: duljina, sirina i boja pravokutnika
* i klasu Circle koja ima radijus i boju. Napisite potrebne funkcije klase kako bi donji program
* ispravno radio. Program oboji one pravokutnike kojima dana kruznica moze bit opisana, i to u
* boju kruznice.
* Oznacite sa const parametre i funkcije, gdje god ima smisla.
* POMOC: Kruznica sa radijusom r moze se opisati pravokutniku ako je 2*r=d, gdje je d dijagonala pravokutnika.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Circle
{
private:
	double radius;
	string colour;
public:
	Circle(double rad, string col)
	{
		radius = rad;
		colour = col;
	}
	void set_radius(double rad)
	{
		radius = rad;
	}
	const double get_radius()
	{
		return radius;
	}
	void set_colour(string col)
	{
		colour = col;
	}
	const string get_colour()
	{
		return colour;
	}
	void print()
	{
		cout << "Radius of circle is: " << radius << "Colour of circle is: " << colour << endl;
	}
};

class Rectangle
{
private:
	int width, length;
	string colour;
public:
	Rectangle(const int wd, const int len, const string col)
	{
		width = wd;
		length = len;
		colour = col;
	}
	void set_colour(string col)
	{
		colour = col;
	}
	const string get_colour()
	{
		return colour;
	}
	bool is_circum(Circle circ)
	{
		double r = circ.get_radius();
		double d = get_diag();
		if (2 * r == d)
		{
			return 1;
		}
	}
	const double get_diag()
	{
		return sqrt(pow(width, 2) + pow(length, 2));
	}
	void print()
	{
		cout << "Width of rectangle: " << width << "\nLength of rectangle: " << length << "\nColour of rectangle: " << colour << endl;
	}
};


int main()
{
	vector<Rectangle> v{ {3,4,"blue"},{2,3,"yellow"},{4,3,"red"} };
	Circle circ(2.5, "blue");
	for (auto& rect : v)
	{
		if (rect.is_circum(circ))
		{
			rect.set_colour(circ.get_colour());
		}
	}
	for (auto rect : v)
		rect.print();
}