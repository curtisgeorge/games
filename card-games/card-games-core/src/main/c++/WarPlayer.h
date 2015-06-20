#ifndef __WAR_PLAYER_H__
#define __WAR_PLAYER_H__

#include "StandardPlayingCard.h"

#include <memory>
#include <vector>

using namespace std;

class WarPlayer {
public:
  vector<StandardPlayingCard> getHand() {return hand;}
private:
  vector<StandardPlayingCard> hand;
};

#endif
