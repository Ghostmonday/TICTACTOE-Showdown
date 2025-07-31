procedure DisplayBoard(Board: TBoard);
var
  i, j: Integer;

  function CellToChar(Cell: TCellState): Char;
  begin
    case Cell of
      Empty: Result := ' ';
      X: Result := 'X';
      O: Result := 'O';
    end;
  end;

begin
  Writeln('Current Board:');
  Writeln;
  Writeln('   1   2   3');
  for i := 1 to 3 do
  begin
    Write(i, '  ');
    for j := 1 to 3 do
    begin
      Write(' ', CellToChar(Board[i, j]));
      if j < 3 then Write(' |');
    end;
    Writeln;
    if i < 3 then
      Writeln('  -----------');
  end;
  Writeln;
end;
