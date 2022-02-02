/*Definirajte apstraktnu klasu Quad koja predstavlja cetverokut. Klasa Quad ima cetiri float vrijednosti (duljine stranica),
* funkciju Area za racunanje povrsine i metode za setiranje vrijednosti duljina stranica.
* Iz klase Quad izvedite klase Rectange i Square i nadjacajte (override) funkciju Area
* Napisite funkkciju Calc koja prima parametar tipa Quad i vraca vrijednost odgvoarajuce Area funkcije.
* U main funkciji kreirajte vektor pravokutnika i kvadrata sa nekim vrijednostima stranica,
* proslijedite ih funkciji Calc i ispisite ukupnu povrsinu.
*/
#include<iostream>
#include<vector>
using namespace std;

class Quad
{
protected:
	float len1, hei1, len2, hei2;
public:
	Quad() {};
	Quad(const float l1,const float h1,const float l2,const float h2)
	{
		len1 = l1;
		len2 = l2;
		hei1 = h1;
		hei2 = h2;
	}
	Quad(const Quad& q1)
	{
		len1 = q1.len1;
		len2 = q1.len2;
		hei1 = q1.hei1;
		hei2 = q1.hei2;
	}
	Quad(Quad&& q1)
	{
		len1 = q1.len1;
		len2 = q1.len2;
		hei1 = q1.hei1;
		hei2 = q1.hei2;

		q1.len1 = 0;
		q1.hei1 = 0;
		q1.len2 = 0;
		q1.hei2 = 0;
	}
	~Quad()
	{
		len1 = 0;
		len2 = 0;
		hei1 = 0;
		hei2 = 0;
	}

	virtual float area() = 0;
};
class Rectangle : public Quad
{
public:
	Rectangle() {};
	Rectangle(const float a, const float b)
	{
		len1 = a;
		hei1 = b;
	}

	float area()
	{
		return(len1 * hei1);
	}
};
class Square : public Quad
{
public:
	Square()
	{
	};
	Square(const float a)
	{
		len1 = a;
		hei1 = a; // Ovo je dodano naknadno, ne radi bez ovoga
	}

	float area()
	{
		return(len1 * len1);
	}
};

float Calc(Quad* q)
{
	return q->area();
}

int main()
{
	float sum = 0;
	vector<Quad*> v;
	v.push_back(new Rectangle(10,5));
	v.push_back(new Square(5));
	for (int i = 0; i < v.size(); i++)
	{
		cout << Calc(v[i]) << endl;
		sum = sum + Calc(v[i]);
	}
	cout << "Ukupna povrsina je : " << sum << endl;
	return 0;
}

