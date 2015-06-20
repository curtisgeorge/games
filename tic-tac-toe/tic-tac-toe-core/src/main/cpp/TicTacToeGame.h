#ifndef __TIC_TAC_TOE_GAME_H__
#define __TIC_TAC_TOE_GAME_H__

#include <Game.h>
#include "TicTacToePlayer.h"

class TicTacToeGame : public Game {
public:
  TicTacToeGame();
  void newGame();
  bool isGameOver();
  void doTurn(int, int);
  bool isValidMove(int, int);
  char get(int, int);
private:
  bool isDraw();
  char blah[3][3];
  bool temp();
  TicTacToePlayer *currentPlayer;
  TicTacToePlayer playerX;
  TicTacToePlayer playerO;
};

#endif
