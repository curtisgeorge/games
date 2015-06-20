#ifndef __PAWN_H__
#define __PAWN_H__

#include "ChessPiece.h"

class Pawn : public ChessPiece {
public:
  Pawn(COLOR color);
  bool isMoveValid();
};

#endif
