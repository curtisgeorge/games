#include "War.h"
#include "CardPile.h"
#include "StandardPlayingCardDeck.h"

void War::newGame() {
  StandardPlayingCardDeck deck;
  deck.shuffle();
  player1.getHand().clear();
  //player2.getHand().clear();
  warPile.clear();
  while(!deck.empty()) {
    cout << deck.draw() << endl;
    //player1.getHand().push_back(deck.draw());
    //player2.getHand()->push_back(deck.draw());
  }
}

bool War::isGameOver() {
  return player1.getHand().empty() || player2.getHand().empty();
}
