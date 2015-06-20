#ifndef __DICE_H__
#define __DICE_H__

#include "Die.h"

#include <vector>

using namespace std;

class Dice {
public:
  Dice(vector<Die> dice);
  int roll();
private:
  vector<Die> dice;
};

#endif
