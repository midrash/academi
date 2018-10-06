#include"Snake.h"
#include"render.h"

CSnake::CSnake()
{
	m_len - 3;
	m_dir = DIR_RIGHT;
	m_pos = { 5,5 };
	for (int i = 0; i < 3; i++)
	{
		COORD pos = m_pos;
		pos.X = i;
		M_bodyList.push_back(pos);
	}

}
void CSnake::Draw()
{
	auto iter = M_bodyList.begin();
	for (iter; iter != M_bodyList.end();  ++iter)
	{
		COORD pos = *iter;
		CRenderer::getInstance()->SetPosition(pos.X, pos.y);
		CRenderer::getInstance()->DrawSymbol("a");


	}
	
}

void CSnake::Move()
{
	M_bodyList.pop_back();//제일 뒤에꺼 가져옴
	COORD frontPos = M_bodyList.front();;
	switch (m_dir)
	{
	case CSnake::DIR_UP:
		frontPos.Y += 1;
		break;
	case CSnake::DIR_DOWN:
		frontPos.Y -= 1;
		break;
	case CSnake::DIR_RIGHT:
		frontPos.X += 1;
		break;
	case CSnake::DIR_LEFT:
		frontPos.X -= 1;
		break;
	case CSnake::DIR_COUNT:
		break;
	default:
		break;
	}
}

void CSnake::UpdateDir(int keyCode)
{
	switch (keyCode) // 아스키코드가 아닌 키보드 코드가 따로있음
	{
	case 80:
		m_dir = DIR_DOWN;
	case 72:
		m_dir = DIR_UP;
	case 75:
		m_dir = DIR_LEFT;
	case 77:
		m_dir = DIR_RIGHT;
	default:
		break;
	}
}