#include "Dice.h"

Dice::Dice(vector<Die> dice) {
  this->dice = dice;
}

int Dice::roll() {
  int total = 0;
#if __cplusplus >= 201103L
  for(auto die : dice) {
    total += die.roll();
  }
#else
#if defined(__GXX_EXPERIMENTAL_CXX0X__) && __GNUC__ == 4 && __GNUC_MINOR__ >= 4
  for(auto it = dice.begin(); it != dice.end(); it++) {
#else
  for(vector<Die>::iterator it = dice.begin(); it != dice.end(); it++) {
#endif
    total += (*it).roll();
  }
#endif
  return total;
}
