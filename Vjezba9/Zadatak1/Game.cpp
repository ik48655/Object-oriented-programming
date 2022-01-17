#include "Game.hpp"

bool Game::GameOver(vector<HPlayer>& pl, vector<CPlayer>& cpu) {
	for (int i = 0; i < npl; ++i) {
		if (pl[i].Scoregetter() >= goal)
			return true;
	}
	for (int i = 0; i < ncpu; ++i) {
		if (cpu[i].Scoregetter() >= goal)
			return true;
	}
	return false;
}

void Game::Winner(vector<HPlayer>& pl, vector<CPlayer>& cpu) {
	int max = 0, ind;
	for (int i = 0; i < npl; ++i) {
		if (pl[i].Scoregetter() > max) {
			max = pl[i].Scoregetter();
			ind = i;
		}
	}
	for (int i = 0; i < ncpu; ++i) {
		if (cpu[i].Scoregetter() > max) {
			max = cpu[i].Scoregetter();
			ind = i + npl;
		}
	}
	system("cls");
	cout << "Player " << ind + 1 << " won!";
}

void Game::round(vector<HPlayer>& pl, vector<CPlayer>& cpu) {
	int hand1, guess1; 
	for (int i = 0; i < npl; ++i) {
		pl[i].plHand(i);
	}
	for (int i = 0; i < ncpu; ++i) {
		cpu[i].cpHand(i + npl);
	}
	for (int i = 0; i < npl; ++i) {
		pl[i].plGuess(i);
		guess1 = pl[i].Guessgetter();
		for (int j = 0; j < npl; ++j) {
			if (j == i)
				continue;
			hand1 = pl[j].Handgetter();
			if (guess1 == hand1)
				pl[i].incrScore();
		}
		for (int j = 0; j < ncpu; ++j) {
			hand1 = cpu[j].Handgetter();
			if (guess1 == hand1)
				pl[i].incrScore();
		}
	}
	for (int i = 0; i < ncpu; ++i) {
		cpu[i].cpGuess(i + npl);
		guess1 = cpu[i].Guessgetter();
		for (int j = 0; j < npl; ++j) {
			hand1 = pl[j].Handgetter();
			if (guess1 == hand1)
				cpu[i].incrScore();
		}
		for (int j = 0; j < ncpu; ++j) {
			if (j == i)
				continue;
			hand1 = cpu[j].Handgetter();
			if (guess1 == hand1)
				cpu[i].incrScore();
		}
	}
	for (int i = 0; i < npl; ++i) {
		pl[i].Guesssetter(0);
		pl[i].Handsetter(0);
	}
}

void Game::scoreboard(vector<HPlayer>& pl, vector<CPlayer>& cpu) {
	system("cls");
	int score1, total = ncpu + npl;
	for (int i = 0; i < npl; ++i) {
		score1 = pl[i].Scoregetter();
		cout << "P" << i + 1 << " " << score1 << "/" << goal << endl;
	}
	for (int i = 0; i < ncpu; ++i) {
		score1 = cpu[i].Scoregetter();
		cout << "P" << npl + i + 1 << " " << score1 << "/" << goal << endl;
	}
	Sleep(2000);
}
