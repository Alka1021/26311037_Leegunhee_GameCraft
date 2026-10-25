#include "SceneGameEasy.h"
#include "GameInput.h"
#include "App.h"

SceneGameEasy::SceneGameEasy()
{
	m_message = "SceneGameEasy";
}

int SceneGameEasy::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_GAME_MEDIUM);
	}

	return 0;
}