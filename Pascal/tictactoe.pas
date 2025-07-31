program TicTacToe;

{ Tic-Tac-Toe Game - Data Structures and Variables }

type
  { Board cell can be empty, X, or O }
  TCellState = (Empty, X, O);
  
  { 3x3 game board }
  TBoard = array[1..3, 1..3] of TCellState;
  
  { Game state enumeration }
  TGameState = (Playing, XWins, OWins, Draw);

var
  { Main game board }
  Board: TBoard;
  
  { Current player (X starts first) }
  CurrentPlayer: TCellState;
  
  { Current game state }
  GameState: TGameState;
  
  { Move counter to track number of moves made }
  MoveCount: Integer;

{ Procedure to initialize the game board and variables }
procedure InitializeGame;
var
  i, j: Integer;
begin
  { Initialize all board cells to empty }
  for i := 1 to 3 do
    for j := 1 to 3 do
      Board[i, j] := Empty;
  
  { Set starting player to X }
  CurrentPlayer := X;
  
  { Set initial game state }
  GameState := Playing;
  
  { Reset move counter }
  MoveCount := 0;
end;

{ Procedure to display the current game board }
procedure DisplayBoard;
var
  i, j: Integer;
  
  { Function to convert cell state to display character }
  function CellToChar(cell: TCellState): Char;
  begin
    case cell of
      Empty: CellToChar := ' ';
      X: CellToChar := 'X';
      O: CellToChar := 'O';
    end;
  end;

begin
  WriteLn;
  WriteLn('Current Board:');
  WriteLn;
  
  { Display column numbers }
  WriteLn('   1   2   3');
  
  { Display each row with row numbers }
  for i := 1 to 3 do
  begin
    { Display row number and cells }
    Write(i, '  ');
    for j := 1 to 3 do
    begin
      Write(CellToChar(Board[i, j]));
      if j < 3 then
        Write(' | ');
    end;
    WriteLn;
    
    { Display horizontal separator between rows }
    if i < 3 then
      WriteLn('  -----------');
  end;
  
  WriteLn;
end;

begin
  { Initialize the game when program starts }
  InitializeGame;
  
  { Display the initial empty board }
  DisplayBoard;
  
  { Program ends here for now - no gameplay logic yet }
end.
