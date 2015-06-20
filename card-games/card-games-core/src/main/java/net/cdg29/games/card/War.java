package net.cdg29.games.card;

public class War implements CardGame {
  private final WarPlayer player1 = new WarPlayer();
  private final WarPlayer player2 = new WarPlayer();
  private final CardPile<StandardPlayingCard> warPile = new CardPile<>();

  @Override
  public void newGame() {
    StandardPlayingCardDeck deck = new StandardPlayingCardDeck();
    deck.shuffle();
    player1.getHand().clear();
    player2.getHand().clear();
    warPile.clear();
    while(!deck.isEmpty()) {
      player1.getHand().add(deck.draw());
      player2.getHand().add(deck.draw());
    }
  }

  @Override
  public boolean isGameOver() {
    return player1.getHand().isEmpty() || player2.getHand().isEmpty();
  }
}
