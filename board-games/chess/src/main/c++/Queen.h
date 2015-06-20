#ifndef __QUEEN_H__
#define __QUEEN_H__

#include "ChessPiece.h"

class Queen : public ChessPiece {
public:
  Queen(COLOR color);
  bool isMoveValid();
};

#endif
