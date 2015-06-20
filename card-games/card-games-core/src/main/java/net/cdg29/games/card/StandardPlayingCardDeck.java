package net.cdg29.games.card;

public class StandardPlayingCardDeck extends CardPile<StandardPlayingCard> {
  public StandardPlayingCardDeck() {
    super();
    for(StandardPlayingCardSuit suit : StandardPlayingCardSuit.values()) {
      for(StandardPlayingCardRank rank : StandardPlayingCardRank.values()) {
        add(new StandardPlayingCard(suit, rank));
      }
    }
  }
}
