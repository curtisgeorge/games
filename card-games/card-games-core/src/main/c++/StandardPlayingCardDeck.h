#ifndef __STANDARD_PLAYING_CARD_DECK__
#define __STANDARD_PLAYING_CARD_DECK__

#include "CardPile.h"
#include "StandardPlayingCard.h"

class StandardPlayingCardDeck : public CardPile<StandardPlayingCard> {
public:
  StandardPlayingCardDeck();
};

#endif
