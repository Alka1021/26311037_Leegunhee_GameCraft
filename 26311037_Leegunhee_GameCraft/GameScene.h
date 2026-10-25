#pragma once
#include <string>

enum GAME_PHASE : int
{
	SCENE_TITLE = 0,
	SCENE_SELECT_DIFFICULTY,
	SCENE_GAME_EASY,
	SCENE_GAME_MEDIUM,
	SCENE_GAME_HARD,
	SCENE_RESULT
};



class GameScene
{
public:
	GameScene();

	virtual int Init();
	virtual int Destroy();
	virtual int Update();
	virtual int Render();

protected:
	int m_font1{ -1 };
	std::string  m_message;
};

