#define KEY_LEFT 75
#define KEY_RIGHT 77
#ifndef _PLAYER
#define _PLAYER
#include <iostream>
#include <conio.h>
#include <time.h>
#include <vector>
#include <Windows.h>
using namespace std;

class Player {
protected:
	int hand, guess, score;
public:
	Player() {
		hand = 0;
		guess = 0;
		score = 0;
	}
	int Handgetter();
	int Guessgetter();
	int Scoregetter();
	void Handsetter(int a);
	void Guesssetter(int a);
	void Scoresetter(int a);
	void incrScore();
};

class CPlayer : public Player {
private:
public:
	void cpHand(int a);
	void cpGuess(int a);
};

class HPlayer : public Player {
private:
public:
	void plHand(int a);
	void plGuess(int a);
};
#endif
