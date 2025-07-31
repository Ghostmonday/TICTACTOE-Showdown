# tic_tac_toe.py

# Represents the 3x3 Tic-Tac-Toe board as a list of lists
board = [[None for _ in range(3)] for _ in range(3)]

# Tracks the current player ('X' or 'O')
current_player = 'X'

# Tracks the state of the game ('ongoing', 'draw', 'win')
game_state = 'ongoing'


def render_board():
    """Displays the current Tic-Tac-Toe board in a 3x3 grid format."""
    for i, row in enumerate(board):
        row_display = ' | '.join(cell if cell is not None else ' ' for cell in row)
        print(f' {row_display} ')
        if i < 2:
            print('---+---+---')
