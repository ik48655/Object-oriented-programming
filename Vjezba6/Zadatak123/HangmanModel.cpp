#include "Hangman.h"

void HangmanModel::setMovie(string str)
{
	int i, cnt = 0;
	movie = str;
	guessMovie = str;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
			guessMovie[i] = ' ';
		else if (str[i] == '-' || str[i] == ':' || str[i] == '\'')
			guessMovie[i] = str[i];
		else
			guessMovie[i] = '_';
	}
}

void HangmanModel::setGMovie(string str)
{
	guessMovie = str;
}

string HangmanModel::getMovie() const
{
	return movie;
}

string HangmanModel::getGMovie() const
{
	return guessMovie;
}

int HangmanModel::getLives() const
{
	return lives;
}

void HangmanModel::setLives(int liv)
{
	lives = liv;
}

string HangmanModel::getLetters() const
{
	return usedLetters;
}

void HangmanModel::setLetters(string let)
{
	usedLetters = let;
}
