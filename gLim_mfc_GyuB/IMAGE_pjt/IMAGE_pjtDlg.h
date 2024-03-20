
// IMAGE_pjtDlg.h: 헤더 파일
//

#pragma once


// CIMAGEpjtDlg 대화 상자
class CIMAGEpjtDlg : public CDialogEx
{
private:
	CImage m_image;
	BOOL ValidImgPos(int x, int y);
	int nCreateCount = 1;
// 생성입니다.
public:
	CIMAGEpjtDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMAGE_PJT_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.

// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_iX1;
	int m_iY1;
	void UpdataDisplay();

	afx_msg void OnBnClickedBtnCreate();
	void Start();
	void Save();
	void MoveRect();
	void Create(unsigned char* fm, int x, int y, int nColor);
	bool Circle(int x, int y, int nCenterX, int nCenterY, int nRadius);

	afx_msg void OnBnClickedBtnLoad();
	int Random();
	void Load(int nRandom);
	void GetPoint();
};
