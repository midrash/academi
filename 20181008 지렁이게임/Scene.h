#pragma once

class CScene
{
public:
	CScene();
	~CScene();
	virtual void Update() =0; // ���������Լ�
	virtual void Draw() =0;
	void DrawBaseRect();
};
