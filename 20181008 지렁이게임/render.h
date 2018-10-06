#pragma once
#include<Windows.h>
#include<string>
using namespace std;

class CRenderer
{
public:
	static CRenderer* getInstance() // 스테틱으로 생성시 데이터 공간에 들어감, 즉 전역변수처럼 쓰임 , 프로그램 실행과 동시에 초기화 해줘야함
	{
		if (instance == NULL)
		{
			instance = new CRenderer();
		}
		return instance; 
	}
	inline void SetPosition(int x, int y) 
	{
		m_pos.X = x*2, m_pos.Y = y;
	}
	
	inline COORD GetPosition() { return m_pos;	}

	void DrawSymbol(string sym);
	void Clear();
private:
	CRenderer() //생성자를 private에 넣어야함, 싱글톤
	{
	}

	COORD m_pos;
	static CRenderer* instance;
};

