package net.cdg29.games.board;

import java.util.Collection;

public abstract class AbstractBoard implements Board {
  protected Collection<? extends Piece> pieces;
}
