#ifndef __DIE_H__
#define __DIE_H__

class Die {
public:
  Die(int numSides);
  int roll();
private:
  int numSides;
};

#endif
