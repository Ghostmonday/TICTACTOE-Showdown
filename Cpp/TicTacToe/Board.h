#pragma once

#include <array>
#include <string>

// Enum to represent the cell state
enum class CellState {
    Empty,
    X,
    O
};

// Class to represent the Tic-Tac-Toe board
class Board {
private:
    // 3x3 board represented as a 2D array
    std::array<std::array<CellState, 3>, 3> grid;
    
public:
    // Constructor to initialize an empty board
    Board();
    
    // Get the state of a specific cell
    CellState getCellState(int row, int col) const;
    
    // Set the state of a specific cell
    void setCellState(int row, int col, CellState state);
    
    // Reset the board to its initial state
    void reset();
};
