#ifndef __WAR_H__
#define __WAR_H__

#include "CardGame.h"
#include "WarPlayer.h"
#include "CardPile.h"
#include "StandardPlayingCard.h"

class War : public CardGame {
  public:
    void newGame();
    bool isGameOver();
  private:
    WarPlayer player1;
    WarPlayer player2;
    CardPile<StandardPlayingCard> warPile;
};

#endif
