#include "Board.h"

// Constructor to initialize an empty board
Board::Board() {
    reset();
}

// Reset the board to its initial state
void Board::reset() {
    // Set all cells to empty
    for (auto& row : grid) {
        for (auto& cell : row) {
            cell = CellState::Empty;
        }
    }
}

// Get the state of a specific cell
CellState Board::getCellState(int row, int col) const {
    return grid[row][col];
}

// Set the state of a specific cell
void Board::setCellState(int row, int col, CellState state) {
    grid[row][col] = state;
}

// Display the current board state to the console
void Board::display() const {
    std::cout << "\n";
    
    // Loop through each row
    for (int row = 0; row < 3; ++row) {
        // Print row separator except for the first row
        if (row > 0) {
            std::cout << "-----------\n";
        }
        
        // Loop through each column
        for (int col = 0; col < 3; ++col) {
            // Print column separator except for the first column
            if (col > 0) {
                std::cout << " | ";
            }
            
            // Print the cell content
            switch (grid[row][col]) {
                case CellState::X:
                    std::cout << "X";
                    break;
                case CellState::O:
                    std::cout << "O";
                    break;
                default:
                    // Print the cell number for empty cells (makes it easier for users)
                    std::cout << " ";
                    break;
            }
        }
        
        // End of row
        std::cout << "\n";
    }
    
    std::cout << "\n";
}
