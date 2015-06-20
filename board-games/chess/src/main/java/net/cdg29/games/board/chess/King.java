package net.cdg29.games.board.chess;

public class King extends AbstractChessPiece {
  public King(COLOR color) {
    super(color);
  }

  @Override
  public boolean isValidMove() {
    return false;
  }

  @Override
  public void move(ChessSquare dest) {
  }
}
