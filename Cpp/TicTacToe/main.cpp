#include <iostream>
#include "GameState.h"

int main() {
    // Initialize the game state
    GameState gameState;
    
    // Output initial state information
    std::cout << "Tic-Tac-Toe Game Initialized" << std::endl;
    std::cout << "Current player: " << (gameState.getCurrentPlayer() == CellState::X ? "X" : "O") << std::endl;
    
    // Get the board and display it
    const Board& board = gameState.getBoard();
    std::cout << "Initial empty board:" << std::endl;
    board.display();
    
    // Demonstrate display with some moves (just for testing display functionality)
    // Setting up a sample board state to show rendering
    Board testBoard;
    testBoard.setCellState(0, 0, CellState::X);
    testBoard.setCellState(0, 2, CellState::O);
    testBoard.setCellState(1, 1, CellState::X);
    testBoard.setCellState(2, 0, CellState::O);
    
    std::cout << "Sample board with some moves:" << std::endl;
    testBoard.display();
    
    return 0;
}
