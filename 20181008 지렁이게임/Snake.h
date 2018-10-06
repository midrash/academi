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
		DIR_COUNT // ��ü ������ ��,0���� �����ϱ⶧��
	};
public:
	void Move();
	void Draw();
	void UpdateDir(int);
private:
	int m_len;// ����
	dir m_dir;
	std::list<COORD> M_bodyList;
	COORD m_pos;
};