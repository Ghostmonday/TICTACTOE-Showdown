#include "GameState.h"

// Constructor to initialize a new game
GameState::GameState() {
    reset();
}

// Reset the game to its initial state
void GameState::reset() {
    board.reset();
    currentPlayer = CellState::X;  // X goes first
    status = GameStatus::InProgress;
}

// Get the current board
const Board& GameState::getBoard() const {
    return board;
}

// Get the current player
CellState GameState::getCurrentPlayer() const {
    return currentPlayer;
}

// Get the current game status
GameStatus GameState::getStatus() const {
    return status;
}

// Switch to the next player
void GameState::switchPlayer() {
    currentPlayer = (currentPlayer == CellState::X) ? CellState::O : CellState::X;
}
