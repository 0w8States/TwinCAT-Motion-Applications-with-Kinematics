///////////////////////////////////////////////////////////////////////////////
// MyFirstTrafoDriver.h

#ifndef __MYFIRSTTRAFODRIVER_H__
#define __MYFIRSTTRAFODRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define MYFIRSTTRAFODRV_NAME        "MYFIRSTTRAFO"
#define MYFIRSTTRAFODRV_Major       1
#define MYFIRSTTRAFODRV_Minor       0

#define DEVICE_CLASS CMyFirstTrafoDriver

#include "ObjDriver.h"

class CMyFirstTrafoDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl MYFIRSTTRAFODRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(MYFIRSTTRAFODRV)
	VxD_Service( MYFIRSTTRAFODRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __MYFIRSTTRAFODRIVER_H__