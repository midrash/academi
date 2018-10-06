#include<iostream>
using namespace std;
#include"gameScene.h"
#include"render.h"
CGameScene::CGameScene()
{

}

CGameScene::~CGameScene()
{

}
void Draw()
{

}
void CGameScene::Draw()
{
	m_snake->Draw();
}
void CGameScene::Update()
{
	m_snake->Move();
}
