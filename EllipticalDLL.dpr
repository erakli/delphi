program EllipticalDLL;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils,
  IEllipticalObjectElementsDLL in 'IEllipticalObjectElementsDLL.pas';

var
  Ec: IEllipticalObjectElements;
begin
  try
    { TODO -oUser -cConsole Main : Insert code here }
    Ec := CreateEllipticalObjectElements;
    readln;
  except
    on E: Exception do
      Writeln(E.ClassName, ': ', E.Message);
  end;
end.
