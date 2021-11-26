#include "HangmanView.h"
#include "HangmanController.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>

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

