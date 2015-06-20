#include "StandardPlayingCardDeck.h"

#include <iostream>

StandardPlayingCardDeck::StandardPlayingCardDeck() {
  for(int i = StandardPlayingCardSuit::HEART; i != StandardPlayingCardSuit::CLUB; i++) {
    StandardPlayingCard card(static_cast<StandardPlayingCardSuit>(i));
    this->push_back(card);
    cout << card << endl;
  }
}
