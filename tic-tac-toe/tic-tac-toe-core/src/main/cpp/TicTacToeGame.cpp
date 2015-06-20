#include "TicTacToeGame.h"

TicTacToeGame::TicTacToeGame() : playerX(TicTacToeMark::X), playerO(TicTacToeMark::O) {
}

void TicTacToeGame::newGame() {
  currentPlayer = &playerX;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      blah[i][j] = '\0';
    }
  }
}

bool TicTacToeGame::isGameOver() {
  return temp() || isDraw();
}

bool TicTacToeGame::isDraw() {
  if(temp()) {
    return false;
  }
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(blah[i][j] == '\0') {
        return false;
      }
    }
  }
  return true;
}

bool TicTacToeGame::isValidMove(int i, int j) {
  return i >= 0 && i <= 3 && j >= 0 && j <= 3 && blah[i][j] == '\0';
}

void TicTacToeGame::doTurn(int i, int j) {
  if(!isValidMove(i, j)) {
    throw "";
  }
  blah[i][j] = static_cast<char>(currentPlayer->getMark());
  if(currentPlayer == &playerX) {
    currentPlayer = &playerO;
  }
  else {
    currentPlayer = &playerX;
  }
}

char TicTacToeGame::get(int i, int j) {
  return blah[i][j];
}

bool TicTacToeGame::temp() {
  for(int i = 0; i < 3; i++) {
    if((blah[i][0] != '\0'  && blah[i][0] == blah[i][1] && blah[i][1] == blah[i][2]) ||
       (blah[0][i] != '\0' && blah[0][i] == blah[1][i] && blah[1][i] == blah[2][i])) {
      return true;
    }
  }
  if((blah[0][0] != '\0' && blah[0][0] == blah[1][1] && blah[1][1] == blah[2][2]) ||
     (blah[0][2] != '\0' && blah[0][2] == blah[1][1] && blah[1][1] == blah[2][0])) {
    return true;
  }
  return false;
}
