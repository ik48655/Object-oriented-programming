
#include "HangmanModel.h"
#include "HangmanController.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

class HangmanView {
public:
	void displayProgress(HangmanModel& mod);
	void displayUsedLetters(HangmanModel& mod);
	void displayHangman(int lives);
};

