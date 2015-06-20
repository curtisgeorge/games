#include "Pawn.h"

Pawn::Pawn(ChessPiece::COLOR color) : ChessPiece(color) {
}

bool Pawn::isMoveValid() {
  return false;
}
