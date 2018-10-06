#include"inputMgr.h"
#include<conio.h>

CInputMgr* CInputMgr::instance = NULL;
void CInputMgr::ReceiveKeyDown()
{
	m_curInput = _getch();
}