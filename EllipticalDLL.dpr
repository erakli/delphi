program EllipticalDLL;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.SysUtils,
  uObjectElem in 'uObjectElem.pas';

var
  ObjectElem: ObjectElemHandle;
  temp_rec, get_rec: tObjectElem;

begin
  try
    { TODO -oUser -cConsole Main : Insert code here }
    with temp_rec do
    begin
      a := 1;
      e := 2;
      i := 3;
      w := 4;
      omega := 5;
      JDEquinox := 6;
      T := 7;

      ObjectElem := NewObjectElem;
      SetObjectElem(ObjectElem, a, e, i, w, omega, JDEquinox, T);

      get_rec := GetObjectElem(ObjectElem);
      SetObjectElem(ObjectElem, a, e, 15, w, omega, JDEquinox, T);
      get_rec := GetObjectElem(ObjectElem);
    end;


    readln;
  except
    on E: Exception do
      Writeln(E.ClassName, ': ', E.Message);
  end;
end.
