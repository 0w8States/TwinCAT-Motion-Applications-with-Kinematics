// MyFirstTrafoCtrl.cpp : Implementation of CTcMyFirstTrafoCtrl
#include "TcPch.h"
#pragma hdrstop

#include "MyFirstTrafoW32.h"
#include "MyFirstTrafoCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CMyFirstTrafoCtrl

CMyFirstTrafoCtrl::CMyFirstTrafoCtrl() 
	: ITcOCFCtrlImpl<CMyFirstTrafoCtrl, CMyFirstTrafoClassFactory>() 
{
}

CMyFirstTrafoCtrl::~CMyFirstTrafoCtrl()
{
}

