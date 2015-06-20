package net.cdg29.games.card;

public class StandardPlayingCard implements Card, Ranked, Suited {
  private final StandardPlayingCardSuit suit;
  private final StandardPlayingCardRank rank;

  public StandardPlayingCard(StandardPlayingCardSuit suit, StandardPlayingCardRank rank) {
    this.suit = suit;
    this.rank = rank;
  }

  @Override
  public String toString() {
    return String.format("{Suit: %s, Rank: %s}", suit, rank);
  }

  @Override
  public StandardPlayingCardRank getRank() {
    return rank;
  }
  
  @Override
  public StandardPlayingCardSuit getSuit() {
    return suit;
  }
}
