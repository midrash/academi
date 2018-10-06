#include<iostream>
using namespace std;
#include "titleScene.h"
#include"render.h"

CTitleScene::CTitleScene()
{

}

CTitleScene::~CTitleScene()
{

}



void CTitleScene::Update()
{
	if (m_subMessage.length() ==0)
	{
		m_subMessage = "PRESS ANY KEY";
	}
	else
	{
		m_subMessage = "";
	}
}

void CTitleScene::Draw()
{
	DrawLogo();
	DrawSubscribe();
}
void CTitleScene::DrawLogo()
{
	CRenderer::getInstance()->SetPosition(5, 5);
	CRenderer::getInstance()->DrawSymbol("SNAKE GAME");
}
void CTitleScene::DrawSubscribe()
{
	CRenderer::getInstance()->SetPosition(5, 7);
	CRenderer::getInstance()->DrawSymbol("PRESS ANY KEY");
}
