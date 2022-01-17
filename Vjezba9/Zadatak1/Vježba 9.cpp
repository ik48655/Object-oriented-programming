#include "Game.hpp"

int main() {
    srand(time(NULL));
    int npl, ncpu;
    HumanPlayer temp;
    ComputerPlayer temp2;
    vector<HumanPlayer> pl;
    vector<ComputerPlayer> cpu;
    
    cout << "Enter the number of human players: ";
    cin >> npl;
    for (int i = 0; i < npl; ++i)
        pl.push_back(temp);
    
    cout << "Enter the number of computer players: ";
    cin >> ncpu;
    for (int i = 0; i < ncpu; ++i)
        cpu.push_back(temp2);
    
    Game gm(10, npl, ncpu);
    
    while (gm.isGameOver(pl, cpu) == false) {
        gm.round(pl, cpu);
        gm.scoreboard(pl, cpu);
    }
    gm.winner(pl, cpu);
}