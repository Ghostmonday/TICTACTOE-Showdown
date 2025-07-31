def render_board(board):
    print()
    for i in range(3):
        row = " | ".join(board[i])
        print(f" {row} ")
        if i < 2:
            print("---+---+---")
    print()
