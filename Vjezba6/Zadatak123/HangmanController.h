#include "HangmanModel.h"
#include "HangmanView.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

class HangmanController {
public:
	char userEntry(HangmanModel& mod) const;
	void checkLetters(char input, HangmanModel& mod);
	//void updateLives();
	bool checkIfGameIsOver(HangmanModel& mod);
	bool checkWin(HangmanModel& mod);
};

