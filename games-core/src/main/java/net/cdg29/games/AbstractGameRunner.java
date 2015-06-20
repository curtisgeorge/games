package net.cdg29.games;

public abstract class AbstractGameRunner {
  protected final Game game;

  public AbstractGameRunner(Game game) {
    this.game = game;
  }

  public void run() {
    game.newGame();
    while(!game.isGameOver()) {
      doTurn();
    }
  }

  protected abstract void doTurn();
}
