
// RetroStudio.h : fichier d'en-tête principal de l'application RetroStudio
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CMainApp :
// Consultez RetroStudio.cpp pour l'implémentation de cette classe
//

class CMainApp : public CWinAppEx
{
public:
	CMainApp() noexcept;

private:

	retro::core::CLogger m_Logger;

public:

	const retro::core::CLogger& Log() const { return m_Logger; }
	retro::core::CLogger& Log() { return m_Logger; }

// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMainApp theApp;
