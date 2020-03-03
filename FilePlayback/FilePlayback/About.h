#pragma once

#include "SourceReader.h"
#include "Resource.h"
#include <functional>
#include <thread>
#include "atlcomcli.h"

// About dialog

class About : public CDialog
{

public:
	About(CWnd* pParent = nullptr);   // standard constructor
	virtual ~About();

// Dialog Data
enum { IDD = IDD_ABOUT1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
};
