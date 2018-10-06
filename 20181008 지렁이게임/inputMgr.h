#pragma once
#include<windows.h>
class CInputMgr
{
public:
	static CInputMgr* getInstance()
	{
		if (instance == NULL)
		{
			instance = new CInputMgr();
		}
		return instance;
	}
	void ReceiveKeyDown();
	void Clear() { m_curInput = -1; };
	inline char GetCurInput() { return m_curInput; }
private:
	CInputMgr() { m_curInput = -1; }
	int m_curInput;
	static CInputMgr* instance;


};