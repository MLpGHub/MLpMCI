
// MediaControlInterface.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// Hauptsymbole


// CMediaControlInterfaceApp:
// Siehe MediaControlInterface.cpp für die Implementierung dieser Klasse
//

class CMediaControlInterfaceApp : public CWinApp
{
public:
	CMediaControlInterfaceApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CMediaControlInterfaceApp theApp;
