#pragma once

#include "IEllipticalObjectElements.h"
#include "EllipticalObjectElements.h"

class TEllipticalObjectElements : public TInterfacedObject, IEllipticalObjectElements
{
public:

    // __fastcall is required for Delphi-derived classes

	TEllipticalObjectElements():  FEllipticalObjectElements(){ };

	virtual __fastcall ~TEllipticalObjectElements()  { };

    // __stdcall for the implementation of the COM-style interface methods


	// Methods of IInterface/IUnknown have to be reimplemented and forwarded.

	HRESULT __stdcall QueryInterface(const GUID& IID, void **Obj)
	{
		return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE;
	}

	ULONG __stdcall AddRef()
	{
		return TInterfacedObject::_AddRef();
	}

	ULONG __stdcall Release()
    {
        return TInterfacedObject::_Release();
    }

	double a;
	double e;
	double i;
	double w;
	double omega;
	double JDEquinox;
	double T;

private:
	EllipticalObjectElements FEllipticalObjectElements;
};
