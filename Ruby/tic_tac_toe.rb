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

def display_board
  puts
  puts " #{@board[0][0]} | #{@board[0][1]} | #{@board[0][2]} "
  puts "---+---+---"
  puts " #{@board[1][0]} | #{@board[1][1]} | #{@board[1][2]} "
  puts "---+---+---"
  puts " #{@board[2][0]} | #{@board[2][1]} | #{@board[2][2]} "
  puts
end
