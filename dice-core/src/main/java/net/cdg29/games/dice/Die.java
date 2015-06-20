package net.cdg29.games.dice;

import java.util.Random;

public class Die {
  private int numSides;

  public Die(int numSides) {
    this.numSides = numSides;
  }

  int roll() {
    Random random = new Random();
    return random.nextInt(numSides) + 1;
  }
}
