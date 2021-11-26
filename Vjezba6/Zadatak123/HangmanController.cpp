#include "Hangman.h"

char HangmanController::userEntry(HangmanModel& mod) const
{
	string let = mod.getLetters();
	char input;
	cout << "\nEnter a character: ";
	cin >> input;
	for (int i = 0; let[i] != '\0'; ++i)
	{
		if (tolower(let[i]) == tolower(input))
		{
			cout << "Letter already used! Try again!";
			return '$';
		}
	}
	let += input;
	mod.setLetters(let);
	return input;
}

void HangmanController::checkLetters(char input, HangmanModel& mod)
{
	if (input == '$')
		return;
	string let = mod.getLetters();
	int lives = mod.getLives(), cnt = 0;
	string movie = mod.getMovie();
	string gMovie = mod.getGMovie();
	for (int i = 0; movie[i] != '\0'; ++i)
	{
		if (tolower(movie[i]) == tolower(input))
		{
			gMovie[i] = movie[i];
			++cnt;
		}
	}
	if (cnt == 0)
		--lives;
	mod.setLives(lives);
	if (lives == 0)
		mod.inGame = false;
	cout << gMovie << " " << movie;
	mod.setGMovie(gMovie);
}

bool HangmanController::checkIfGameIsOver(HangmanModel& mod)
{
	int cnt = 0;
	string gMovie = mod.getGMovie();
	for (int i = 0; gMovie[i] != '\0'; ++i)
	{
		if (gMovie[i] == '_')
			++cnt;
	}
	if (cnt == 0)
		mod.inGame = false;
	return mod.inGame;
}

bool HangmanController::checkWin(HangmanModel& mod)
{
	int cnt = 0;
	string gMovie = mod.getGMovie();
	for (int i = 0; gMovie[i] != '\0'; ++i)
	{
		if (gMovie[i] == '_')
			++cnt;
	}
	return (cnt == 0);
}