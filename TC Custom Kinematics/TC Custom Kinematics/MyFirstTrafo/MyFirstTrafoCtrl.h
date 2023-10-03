///////////////////////////////////////////////////////////////////////////////
// MyFirstTrafoCtrl.h

#ifndef __MYFIRSTTRAFOCTRL_H__
#define __MYFIRSTTRAFOCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "MyFirstTrafoW32.h"
#include "TcBase.h"
#include "MyFirstTrafoClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CMyFirstTrafoCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CMyFirstTrafoCtrl, &CLSID_MyFirstTrafoCtrl>
	, public IMyFirstTrafoCtrl
	, public ITcOCFCtrlImpl<CMyFirstTrafoCtrl, CMyFirstTrafoClassFactory>
{
public:
	CMyFirstTrafoCtrl();
	virtual ~CMyFirstTrafoCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_MYFIRSTTRAFOCTRL)
DECLARE_NOT_AGGREGATABLE(CMyFirstTrafoCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CMyFirstTrafoCtrl)
	COM_INTERFACE_ENTRY(IMyFirstTrafoCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __MYFIRSTTRAFOCTRL_H__
