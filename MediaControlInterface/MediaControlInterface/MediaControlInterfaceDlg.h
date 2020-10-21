
// MediaControlInterfaceDlg.h: Headerdatei
//

#pragma once


// CMediaControlInterfaceDlg-Dialogfeld
class CMediaControlInterfaceDlg : public CDialogEx
{
// Konstruktion
public:
	CMediaControlInterfaceDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEDIACONTROLINTERFACE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
