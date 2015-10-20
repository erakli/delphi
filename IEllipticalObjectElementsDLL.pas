unit IEllipticalObjectElementsDLL;

interface

type

  IEllipticalObjectElements = interface
  ['{5B57E949-1F59-4CBA-887B-1A96C6A23596}']
  end;

function CreateEllipticalObjectElements: IEllipticalObjectElements; stdcall;

implementation

function CreateEllipticalObjectElements;
  external 'EllipticalObjectElementsDLL.dll'
  name 'CreateEllipticalObjectElements';

end.
