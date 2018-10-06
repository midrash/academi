#include<iostream>
#include "Scene.h"
#include "titleScene.h"
#include<Windows.h>
#include"inputMgr.h"
#include<conio.h>
#include"GameLogic.h"

using namespace std;

int main()
{
	// Å¸ÀÌÆ²
	

	while (1)
	{
		CScene* scene = CGameLogic::getInstance()->GetScene();
		if (_kbhit())
		{
			CInputMgr::getInstance()->Clear();
			CInputMgr::getInstance()->ReceiveKeyDown();
			
		}
		CGameLogic::getInstance()->Update();
		scene->Update();
		scene->DrawBaseRect();
		scene->Draw();
		Sleep(1000);

	}
	return 0;
}