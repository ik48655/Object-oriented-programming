#include <iostream>
#include "header.h"
#include <random>
using namespace std;

int main()
{
	srand(time(NULL));
	Weapon weapon;
	Point firstRandom, secondRandom;
	int numOfTargets;
	bool targethit = false;
	cout << "Enter number of targets to be generated: " << endl;
	cin >> numOfTargets;
	Target* targetArray = new Target[numOfTargets];
	for (int i = 0; i < numOfTargets; i++)
	{
		firstRandom.randdot();
		secondRandom.randdot();
		targetArray[i].targetcoord(firstRandom, secondRandom);
	}
	for (int i = 0; i < numOfTargets; i++)
	{
		weapon.Shoot();
		if (targetArray[i].hitreg(weapon,targetArray[i].llf, targetArray[i].urb)==true)
		{
			targethit = true;
			cout << "Target number [" << i + 1 << "] has been shot" << endl;
		}
		else
		{
			targethit = false;
			cout << "Target number [" << i + 1 << "] has been shot" << endl;
		}

	}
	return 0;
}