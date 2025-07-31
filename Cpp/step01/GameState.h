#pragma once

#include "Board.h"

// Enum to represent the game state
enum class GameStatus {
    InProgress,
    XWon,
    OWon,
    Draw
};

// Class to track the game state
class GameState {
private:
    Board board;
    CellState currentPlayer;
    GameStatus status;
    
public:
    // Constructor to initialize a new game
    GameState();
    
    // Get the current board
    const Board& getBoard() const;
    
    // Get the current player
    CellState getCurrentPlayer() const;
    
    // Get the current game status
    GameStatus getStatus() const;
    
    // Reset the game to its initial state
    void reset();
    
    // Switch to the next player
    void switchPlayer();
};
