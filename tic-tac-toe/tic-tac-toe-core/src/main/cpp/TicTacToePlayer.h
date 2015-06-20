#ifndef __TIC_TAC_TOE_PLAYER_H__
#define __TIC_TAC_TOE_PLAYER_H__

#include "TicTacToeMark.h"

class TicTacToePlayer {
public:
  TicTacToePlayer(TicTacToeMark mark);
  TicTacToeMark getMark();
private:
  TicTacToeMark mark;
};

#endif
