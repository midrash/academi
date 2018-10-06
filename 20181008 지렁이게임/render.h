#pragma once
#include<Windows.h>
#include<string>
using namespace std;

class CRenderer
{
public:
	static CRenderer* getInstance() // ����ƽ���� ������ ������ ������ ��, �� ��������ó�� ���� , ���α׷� ����� ���ÿ� �ʱ�ȭ �������
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
	CRenderer() //�����ڸ� private�� �־����, �̱���
	{
	}

	COORD m_pos;
	static CRenderer* instance;
};

