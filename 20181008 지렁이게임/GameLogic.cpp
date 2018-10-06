#include"GameLogic.h"
#include"titleScene.h"
#include "inputMgr.h"
#include "GameScene.h"
CGameLogic* CGameLogic::instance = NULL;

CGameLogic::CGameLogic()
{
	m_scene = new CTitleScene();
}



void CGameLogic::Update()
{

	switch (m_state)
	{
	case ST_TITLE:
		UpdateOnTitle(); break;
	case ST_GAME:
		UpdateOnGame();  break;
	case ST_END:
		UpdateOnEnd();  break;

	default:
		break;
	}
}

void CGameLogic::UpdateOnTitle()
{
	if (CInputMgr::getInstance()->GetCurInput() > 0)
	{
		//¾ÀÀ» º¯°æÇÔ
		m_nextstate = ST_GAME;
	}
}
void CGameLogic::UpdateOnGame()
{
	if (CInputMgr::getInstance()->GetCurInput() > 0)
	{
		//¾ÀÀ» º¯°æÇÔ
		((CGameScene*)m_scene)->
	}
}
void CGameLogic::UpdateOnEnd()
{

}

void CGameLogic::UpdateScene()
{
	switch(m_nextstate)
	{
	case ST_GAME:
			delete m_scene;
			m_scene = new CGameScene();
			break;
	}
	m_state = m_nextstate;
	m_nextstate = ST_NONE;

}
