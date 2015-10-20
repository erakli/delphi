// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IEllipticalObjectElementsDLL.pas' rev: 28.00 (Windows)

#ifndef Iellipticalobjectelementsdll_H
#define Iellipticalobjectelementsdll_H

#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

#include "EllipticalObjectElements.h"

struct __declspec(uuid("{5B57E949-1F59-4CBA-887B-1A96C6A23596}")) IEllipticalObjectElements  : public System::IInterface
{

};

// The following class takes care of automatic reference counting and can be
// used instead of the naked interface.
typedef System::DelphiInterface<IEllipticalObjectElements> _di_IEllipticalObjectElements;

#ifdef Iellipticalobjectelementsdll_EXPORTS
#define IEllipticalObjectElementsDLL_API __declspec(dllexport) __stdcall
#else
#define IEllipticalObjectElementsDLL_API __declspec(dllimport) __stdcall
#endif

extern "C" _di_IEllipticalObjectElements IEllipticalObjectElementsDLL_API CreateEllipticalObjectElements(void);

#endif	// IellipticalobjectelementsdllHPP
