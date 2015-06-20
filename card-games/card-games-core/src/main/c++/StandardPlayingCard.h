#ifndef __STANDARD_PLAYING_CARD__
#define __STANDARD_PLAYING_CARD__

#include "Card.h"
#include "Suited.h"
#include "StandardPlayingCardSuit.h"

#include <iostream>

using namespace std;

class StandardPlayingCard : public Card, public Suited<StandardPlayingCardSuit> {
public:
  StandardPlayingCard(StandardPlayingCardSuit suit);
  friend ostream& operator<<(ostream& stream, const StandardPlayingCard& card);
};

#endif
