#include "TicTacToeGame.h"

#include <iostream>

using namespace std;

int main() {
  TicTacToeGame game;
  game.newGame();
  while(!game.isGameOver()) {
    cout << "--------------------------------------" << endl;
    cout << "---------- TIC TAC TOE ---------------" << endl;
    cout << endl;
    cout << "    |    |    " << endl;
    cout << " " << game.get(0, 0) << "  |  " << game.get(0, 1) <<"  |  "  << game.get(0, 2) << "  " << endl;
    cout << "----|----|----" << endl;
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;
    cout << "----|----|----" << endl;
    cout << "    |    |    " << endl;
    cout << "    |    |    " << endl;
    int i;
    int j;
    cin >> i;
    cin >> j;
    if(game.isValidMove(i, j)) {
      game.doTurn(i, j);
    }
    else {
      cout << "Invalid input. Try again" << endl;
    }
  }
  return 0;
}
