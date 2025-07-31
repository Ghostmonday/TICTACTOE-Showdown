#include "Board.h"

Board::Board() {
    reset();
}

void Board::reset() {
    for (auto& row : board)
        for (auto& cell : row)
            cell = CellState::Empty;
}

void Board::display() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char symbol = ' ';
            switch (board[i][j]) {
                case CellState::X: symbol = 'X'; break;
                case CellState::O: symbol = 'O'; break;
                case CellState::Empty: symbol = ' '; break;
            }
            std::cout << " " << symbol << " ";
            if (j < 2) std::cout << "|";
        }
        std::cout << std::endl;
        if (i < 2) std::cout << "---+---+---" << std::endl;
    }
}
