#include "hangman.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int n = 0, lives;
    char input;
    string str, str2;
    ifstream myfile("movie.txt");
    HangmanModel mod;
    HangmanController con;
    HangmanView disp;

    while (getline(myfile, str2))
        ++n;
    myfile.clear();
    myfile.seekg(0);
    n = rand() % n;       

    for (int i = 1; i <= n; ++i)
        getline(myfile, str);
    mod.setMovie(str);

         bool inGame = mod.inGame;

    while (inGame)
    {
        lives = mod.getLives();
        system("cls");
        disp.displayHangman(lives);
        disp.displayProgress(mod);
        disp.displayUsedLetters(mod);
        input = con.userEntry(mod);
        con.checkLetters(input, mod);
        inGame = con.checkIfGameIsOver(mod);
    }
    lives = mod.getLives();
    system("cls");
    disp.displayHangman(lives);
    disp.displayProgress(mod);
    disp.displayUsedLetters(mod);

    if (con.checkWin(mod) == true)
        cout << "\nYOU WON";
    else
        cout << "\nGAME OVER";

    myfile.close();
    return 0;
}