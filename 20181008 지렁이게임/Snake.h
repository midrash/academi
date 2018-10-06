#pragma once
#include"Entity.h"
#include<list>
class CSnake : public CEntity
{
	enum dir
	{
		DIR_UP,
		DIR_DOWN,
		DIR_RIGHT,
		DIR_LEFT,
		DIR_COUNT // 전체 갯수가 됨,0부터 시작하기때문
	};
public:
	void Move();
	void Draw();
	void UpdateDir(int);
private:
	int m_len;// 길이
	dir m_dir;
	std::list<COORD> M_bodyList;
	COORD m_pos;
};