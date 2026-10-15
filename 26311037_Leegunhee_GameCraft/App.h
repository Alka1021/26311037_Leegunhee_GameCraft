#pragma once
#include "GameTime.h"

class GameInput;
class GameScene;

class App
{
public:
	App();
	virtual ~App();

	int Init();
	void Destroy();
	int Update();
	int Render();

	int Run();
public:
	GameTime m_gameTime{};
	GameInput* m_pGameInput{};
	GameScene* m_pGameScene{};
};

extern App* g_pApp;