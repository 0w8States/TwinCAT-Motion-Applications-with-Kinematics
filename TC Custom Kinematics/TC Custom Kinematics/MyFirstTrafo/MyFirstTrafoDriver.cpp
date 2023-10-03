///////////////////////////////////////////////////////////////////////////////
// MyFirstTrafoDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "MyFirstTrafoDriver.h"
#include "MyFirstTrafoClassFactory.h"

DECLARE_GENERIC_DEVICE(MYFIRSTTRAFODRV)

IOSTATUS CMyFirstTrafoDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CMyFirstTrafoClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CMyFirstTrafoDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CMyFirstTrafoDriver::MYFIRSTTRAFODRV_GetVersion( )
{
	return( (MYFIRSTTRAFODRV_Major << 8) | MYFIRSTTRAFODRV_Minor );
}

