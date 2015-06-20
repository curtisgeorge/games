#ifndef __GAME_H__
#define __GAME_H__

class Game {
public:
  virtual void newGame() = 0;
  virtual bool isGameOver() = 0;
};

#endif
