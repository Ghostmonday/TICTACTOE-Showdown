# tic_tac_toe.py

# Represents the 3x3 Tic-Tac-Toe board as a list of lists
board = [[None for _ in range(3)] for _ in range(3)]

# Tracks the current player ('X' or 'O')
current_player = 'X'

# Tracks the state of the game ('ongoing', 'draw', 'win')
game_state = 'ongoing'
