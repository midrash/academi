#include"render.h"
#include<comip.h> //콘솔 인풋 아웃풋
#include<iostream>

using namespace std;

CRenderer* CRenderer::instance = NULL;



void CRenderer::DrawSymbol(string sym)
{
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), 
		m_pos
	); // 내가 원하는 커서로 이동함;
	cout << sym;
}

void CRenderer::Clear()
{
	for (short i = 0; i < 60; i++)
	{
		for (short j = 0; j < 70; j++)
		{
			SetConsoleCursorPosition(
				GetStdHandle(STD_OUTPUT_HANDLE),
			{i,j}
			);
			cout << "  ";
		}
	}
}