package net.cdg29.games.board.chess;

/**
 *
 * @author curtis.george
 */
public class Bishop extends AbstractChessPiece {
  public Bishop(COLOR color) {
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
