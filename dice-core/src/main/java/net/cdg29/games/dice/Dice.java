package net.cdg29.games.dice;

import java.util.Collection;

public class Dice {
  private Collection<Die> dice;

  public Dice(Collection<Die> dice) {
    this.dice = dice;
  }

  public int roll() {
    int total = 0;
    for(Die die : dice) {
      total += die.roll();
    }
    return total;
  }
}
