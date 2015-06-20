#include "TicTacToePlayer.h"

TicTacToePlayer::TicTacToePlayer(TicTacToeMark mark) {
  this->mark = mark;
}

TicTacToeMark TicTacToePlayer::getMark() {
  return this->mark;
}
