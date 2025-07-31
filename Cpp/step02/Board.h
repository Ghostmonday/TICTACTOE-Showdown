#pragma once
#include <array>
#include <iostream>

enum class CellState { Empty, X, O };

class Board {
private:
    std::array<std::array<CellState, 3>, 3> board;
public:
    Board();
    void reset();
    void display() const;
};
