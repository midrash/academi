#pragma once
#include<Windows.h>

class CEntity
{
public:
	CEntity();// »ý¼ºÀÚ
	virtual ~CEntity();
	virtual void Draw() = 0;
private:

	COORD m_pos;
};