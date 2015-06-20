#include "StandardPlayingCard.h"

StandardPlayingCard::StandardPlayingCard(StandardPlayingCardSuit suit) : Suited<StandardPlayingCardSuit>::Suited(suit) {
}

ostream& operator<<(ostream& stream, const StandardPlayingCard& card) {
  return stream << "Suit: " << card.suit;
}
