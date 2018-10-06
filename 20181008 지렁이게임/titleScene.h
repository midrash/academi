#pragma once
#include "Scene.h"
#include<string>
using namespace std;
class CTitleScene : public CScene
{
	public:
		CTitleScene();
		~CTitleScene();
		void Update();
		void Draw();

	private:
		void DrawLogo();
		void DrawSubscribe();

		string m_subMessage="";
};