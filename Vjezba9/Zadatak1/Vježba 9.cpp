#include "Game.hpp"

int main() {
    srand(time(NULL));
    int npl, ncpu;
    HPlayer temp;
    CPlayer temp2;
    vector<HPlayer> pl;
    vector<CPlayer> cpu;
    
    
    cout << "Enter the number of computer players: ";
    cin >> ncpu;
    for (int i = 0; i < ncpu; ++i)
        cpu.push_back(temp2);

    cout << "Enter the number of human players: ";
    cin >> npl;
    for (int i = 0; i < npl; ++i)
        pl.push_back(temp);
    
    Game gm(10, npl, ncpu);
    
    while (gm.GameOver(pl, cpu) == false) {
        gm.round(pl, cpu);
        gm.scoreboard(pl, cpu);
    }
    gm.Winner(pl, cpu);
}