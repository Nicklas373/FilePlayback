// About.cpp : implementation file
//

#include "stdafx.h"
#include "mfapi.h"
#include <vector>
#include <utility>
#include "FilePlayback.h"
#include "FilePlaybackDlg.h"
#include "SourceReader.h"
#include "windows.h"
#include "FilePlayback.h"
#include "About.h"
#include "afxdialogex.h"


// About dialog

About::About(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_ABOUT1, pParent)
{

}

About::~About()
{
}

void About::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

// About message handlers
