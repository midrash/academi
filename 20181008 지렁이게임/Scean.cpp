#include<iostream>
#include "Scene.h"
#include"render.h"

CScene::CScene()
{

}
CScene::~CScene()
{

}

void CScene::DrawBaseRect()
{
	//CRenderer::getInstance()->Clear();
	for (int i = 0; i < 30; i++)
	{
		CRenderer::getInstance()->SetPosition(i, 0);
		CRenderer::getInstance()->DrawSymbol("��");
	}
	for (int i = 0; i < 18; i++)
	{

		CRenderer::getInstance()->SetPosition(0, i+1);
		CRenderer::getInstance()->DrawSymbol("��");
		CRenderer::getInstance()->SetPosition(29, i+1);
		CRenderer::getInstance()->DrawSymbol("��");
	}
	for (int i = 0; i < 30; i++)
	{
		CRenderer::getInstance()->SetPosition(i, 19);
		CRenderer::getInstance()->DrawSymbol("��");
	}
	/*
	for (int i = 0; i < 30; i++)
		cout << "��";
	cout << endl;
	cout << "��";
	for (int j = 0; j < 18; j++)
	{
		cout << "��";
		for (int i = 0; i < 28; i++)
		{
			cout << "  ";
		}
		cout << "��";

	}
	for (int i = 0; i < 30; i++)
		cout << "��";
	cout << endl;
	*/
}