package net.cdg29.games.board;

import net.cdg29.games.GameComponent;

import java.util.Collection;

public interface Board extends GameComponent {
  public Collection<? extends Piece> getPieces();
}
