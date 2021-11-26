#ifndef FUN
#define FUN
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

class HangmanModel {
	string movie;
	string guessMovie;
	int lives;
	string usedLetters;
public:
	bool inGame;

	HangmanModel()
	{
		inGame = true;
		lives = 7;
	};
	void setMovie(string str);
	void setGMovie(string str);
	void setLetters(string let);
	void setLives(int liv);
	string getMovie() const;
	string getGMovie() const;
	int getLives() const;
	string getLetters() const;
};

class HangmanView {
public:
	void displayProgress(HangmanModel& mod);
	void displayUsedLetters(HangmanModel& mod);
	void displayHangman(int lives);
};

class HangmanController {
public:
	char userEntry(HangmanModel& mod) const;
	void checkLetters(char input, HangmanModel& mod);
	//void updateLives();
	bool checkIfGameIsOver(HangmanModel& mod);
	bool checkWin(HangmanModel& mod);
};

#endif
