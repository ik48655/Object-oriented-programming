#include "Hangman.h"

void HangmanView::displayProgress(HangmanModel& mod)
{
	string str = mod.getGMovie();
	cout << endl;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		cout << str[i] << " ";
	}
	cout << endl;
}

void HangmanView::displayUsedLetters(HangmanModel& mod)
{
	string let = mod.getLetters();
	int n = let.size();
	cout << endl << "\nUsed letters: ";
	for (int i = 0; i < n; ++i)
		cout << let[i] << " ";
	cout << endl;
}

void HangmanView::displayHangman(int lives)
{
	cout << "     ______\n    | /  |\n    |/   ";
	if (lives < 7)
		cout << "O";
	cout << "\n    |   ";
	if (lives < 6)
		cout << "/";
	if (lives < 5)
		cout << "|";
	if (lives < 4)
		cout << "\\";
	cout << "\n    |    ";
	if (lives < 3)
		cout << "|";
	cout << "\n    |   ";
	if (lives < 2)
		cout << "/ ";
	if (lives < 1)
		cout << "\\";
	cout << "\n    |\n___ | _____\n";
}
//     ______
//    | /  |
//    |/   O
//    |   /|\
//    |    |
//    |   / \
//    |
//___ | _____