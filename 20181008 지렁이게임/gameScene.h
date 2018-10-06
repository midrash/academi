#pragma once
#include "Scene.h"
#include"Snake.h"
#include<string>
using namespace std;

class CGameScene : public CScene
{
public:
	CGameScene();
	~CGameScene();
	void Update();
	void Draw();

	inline CSnake* GetSnake{ return m_snake; }

private:
	void DrawLogo();

	CSnake* m_snake;
};