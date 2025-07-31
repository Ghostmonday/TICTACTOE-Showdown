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
