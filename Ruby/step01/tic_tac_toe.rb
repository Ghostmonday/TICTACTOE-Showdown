# The game board, represented as a 3x3 grid.
# Initially, each cell is numbered 1-9.
@board = [
  ["1", "2", "3"],
  ["4", "5", "6"],
  ["7", "8", "9"]
]

# The current player, either "X" or "O".
@current_player = "X"

# The state of the game.
# Can be :in_progress, :winner, or :draw.
@game_state = :in_progress
