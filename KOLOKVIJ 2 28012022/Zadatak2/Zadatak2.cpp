/*Napisite interface za zivotinju te implementaciju za vrapca, macku i muhu. Napisite funkciju koja cita brojeve
* i dodaje odgovarajucu zivotinju u vektor (1=vrabac,2=macka,3=muha).Napisite funkciju koja prima vektor i vraca ukupan
* broj nogu svih zivotinja. U main funkciji ispisite prosjecan broj nogu.
*/
#include<iostream>
#include<vector>
using namespace std;

class Animal
{
public:
	virtual int getLegs() = 0;

};

class Sparrow : public Animal
{
private:
	int legs;
public:
	Sparrow()
	{
		legs = 2;
	};
	int getLegs()
	{
		return legs;
	}
};
class Fly : public Animal
{
private:
	int legs;
public:
	Fly() 
	{
		legs = 6;
	};
	int getLegs()
	{
		return legs;
	}
};
class Cat : public Animal
{
private:
	int legs;
public:
	Cat()
	{
		legs = 4;
	}
	int getLegs()
	{
		return legs;
	}
};


int brojnogu(vector<Animal*> a)
{
	int sum = 0;
	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		sum += a[i]->getLegs();
	}
	return sum;
}
int main()
{	
	vector<int> num = { 1,2,3 };
	int size = num.size();
	vector<Animal*> z;
	for (int i = 0; i < size; i++)
	{
		if (num[i] == 1)
		{
			z.push_back(new Sparrow);
		}
		else if (num[i] == 2)
		{
			z.push_back(new Cat);
		}
		else
		{
			z.push_back(new Fly);
		}
	}
	int sum = brojnogu(z);
	cout << float(sum) / float(size);
	return 0;
}