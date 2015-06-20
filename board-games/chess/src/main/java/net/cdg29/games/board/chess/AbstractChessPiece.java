package net.cdg29.games.board.chess;

public abstract class AbstractChessPiece implements ChessPiece {
  private final COLOR color;

  public AbstractChessPiece(COLOR color) {
    this.color = color;
  }

  @Override
  public COLOR getColor() {
    return color;
  }
}
