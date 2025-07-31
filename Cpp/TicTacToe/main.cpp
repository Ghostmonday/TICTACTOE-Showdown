#include <iostream>
#include "GameState.h"

int main() {
    // Initialize the game state
    GameState gameState;
    
    // Output initial state information
    std::cout << "Tic-Tac-Toe Game Initialized" << std::endl;
    std::cout << "Current player: " << (gameState.getCurrentPlayer() == CellState::X ? "X" : "O") << std::endl;
    
    // The game board and state variables are now set up
    // No gameplay logic or display has been implemented yet
    
    return 0;
}
