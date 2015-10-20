#include <windows.h>
#define IIEllipticalObjectElementsDLL_EXPORT
#include "IEllipticalObjectElements.h"
#include "iEllipticalObjectElementsIMPL.h"

_di_IEllipticalObjectElements __stdcall CreateEllipticalObjectElements(void)
{
    return (IEllipticalObjectElements *)(new TEllipticalObjectElements());
}

int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void* lpReserved)
{
    return 1;
}
