package net.cdg29.games.board.chess;

import net.cdg29.games.board.Piece;

public interface ChessPiece extends Piece {
  public static enum COLOR {WHITE, BLACK};

  public COLOR getColor();
  public boolean isValidMove();
  public void move(ChessSquare dest);
}
