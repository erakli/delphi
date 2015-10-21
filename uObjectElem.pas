unit uObjectElem;

interface

type
  ObjectElemHandle = THandle;

  tObjectElem = record
    a, e, i, w, omega, JDEquinox, T: double;
  end;

function NewObjectElem: ObjectElemHandle; stdcall;
procedure SetObjectElem(handle: ObjectElemHandle; a, e, i, w, omega, JDEquinox, T: double); stdcall;
function GetObjectElem(handle: ObjectElemHandle): tObjectElem; stdcall;

implementation

const
  DLLName = 'AA.dll';

function NewObjectElem; external DLLName;
procedure SetObjectElem; external DLLName;
function GetObjectElem; external DLLName;

end.
