#pragma once

class CScene
{
public:
	CScene();
	~CScene();
	virtual void Update() =0; // 순수가상함수
	virtual void Draw() =0;
	void DrawBaseRect();
};
