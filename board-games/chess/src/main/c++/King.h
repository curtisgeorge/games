#ifndef __KING_H__
#define __KING_H__

#include "ChessPiece.h"

class King : public ChessPiece {
public:
  King(COLOR color);
  bool isMoveValid();
};

#endif
