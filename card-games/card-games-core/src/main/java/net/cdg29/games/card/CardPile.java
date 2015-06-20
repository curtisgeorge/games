package net.cdg29.games.card;

import java.util.ArrayList;
import java.util.Collections;

/**
 * Is an ordered list of cards.
 * 
 * @author curtis.george
 * @param <CARD> 
 */
public class CardPile<CARD extends Card> extends ArrayList<CARD> {
  public void shuffle() {
    Collections.shuffle(this);
  }
  
  public CARD draw() {
    return remove(0);
  }
}
