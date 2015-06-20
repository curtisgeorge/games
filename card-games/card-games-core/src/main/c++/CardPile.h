#ifndef __CARD_PILE_H__
#define __CARD_PILE_H__

#include "Card.h"

#include <algorithm>
#include <cassert>
#include <type_traits>
#include <vector>

using namespace std;

template <class CARD>
class CardPile : public vector<CARD> {
static_assert(is_base_of<Card, CARD>::value, "Invalid Card Type");
public:
  void shuffle();
  CARD draw();
};

template <class CARD>
void CardPile<CARD>::shuffle() {
  random_shuffle(this->begin(), this->end());
}

template <class CARD>
CARD CardPile<CARD>::draw() {
  assert(!this->empty());
  this->erase(this->begin());
  return this->front();
}

#endif
