#include "Player.hpp"

int Player::Handgetter() {
	return hand;
}

int Player::Guessgetter() {
	return guess;
}

int Player::Scoregetter() {
	return score;
}

void Player::Scoresetter(int a) {
	score = a;
}

void Player::Handsetter(int a) {
	hand = a;
}

void Player::Guesssetter(int a) {
	guess = a;
}

void Player::incrScore() {
	score++;
}

void HPlayer::plHand(int a) {
	int input, state = 0;
	int arr[3] = { 1, 2, 5 };
	int set[3] = { 0, 0, 0 };
	while (true) {
		system("cls");
		cout << "Player " << a + 1;
		cout << "\n\nChoose your hand:" << endl;
		cout << "   |  1 kn |     |  2 kn |     |  5 kn |" << endl;
		cout << "     '---'         '---'         '---'" << endl << endl;
		if (hand == 1 || hand == 3 || hand == 6 || hand == 8)
			cout << "     ( X )";
		else 
			cout << "     (   )";
		if (hand == 2 || hand == 3 || hand == 7 || hand == 8)
			cout << "         ( X )";
		else
			cout << "         (   )";
		if (hand == 5 || hand == 6 || hand == 7 || hand == 8)
			cout << "         ( X )" << endl;
		else
			cout << "         (   )" << endl;

		if (state == 0)
			cout << "      /-\\";
		else if (state == 1)
			cout << "                    /-\\";
		else
			cout << "                                  /-\\";

		input = _getch();
		if (input == KEY_LEFT && state > 0)
			state--;
		if (input == KEY_RIGHT && state < 2)
			state++;
		if (input == ' ') {
			if (set[state] == 0) {
				hand += arr[state];
				set[state] = 1;
			}
			else {
				hand -= arr[state];
				set[state] = 0;
			}
		}
		if (input == '\r')
			return;
	}
}

void HPlayer::plGuess(int a) {
	int input, state = 0;
	int arr[8] = { 0, 1, 2, 3, 5, 6, 7, 8 };
	while (true) {
		system("cls");
		cout << "Player " << a + 1 << "\n\nGuess your opponents' hands:\n" << "0 1 2 3 5 6 7 8" << endl;
		for (int i = 0; i < state; ++i)
			cout << "  ";
		cout << "A";
		input = _getch();
		if (input == KEY_LEFT && state > 0)
			state--;
		if (input == KEY_RIGHT && state < 7)
			state++;
		if (input == ' ' || input == '\r') {
			guess = arr[state];
			return;
		}
	}
}

void CPlayer::cpHand(int a) {
	system("cls");
	cout << "Player " << a + 1 << " is choosing...";
	Sleep(110);
	int members[8] = { 0, 1, 2, 3, 5, 6, 7, 8 };
	hand = members[rand() % 7];
}

void CPlayer::cpGuess(int a) {
	system("cls");
	Sleep(110);
	cout << "Player " << a + 1 << " is choosing...";
	int members[8] = { 0, 1, 2, 3, 5, 6, 7, 8 };
	guess = members[rand() % 7];
}