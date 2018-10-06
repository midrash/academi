#pragma once
#include<windows.h>
#include"Scene.h"
class CGameLogic
{
	enum gmaeState
	{
		ST_TITLE,
		ST_GAME,
		ST_END,
		ST_COUNT,
		ST_NONE
	};
public:
	static CGameLogic* getInstance()
	{
		if (instance == NULL)
		{
			instance = new CGameLogic();
		}
		return instance;
	}
	inline CScene* GetScene() { return m_scene; }
	void Update();
	void UpdateScene();

private:
	void UpdateOnTitle();
	void UpdateOnGame();
	void UpdateOnEnd();
	CGameLogic();
	gmaeState m_state = ST_TITLE;
	gmaeState m_nextstate = ST_NONE;
	static CGameLogic* instance;

	CScene* m_scene;
};