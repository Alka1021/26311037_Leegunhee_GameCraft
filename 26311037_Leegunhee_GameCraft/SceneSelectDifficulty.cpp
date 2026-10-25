#include "SceneSelectDifficulty.h"
#include "GameInput.h"
#include "App.h"

SceneSelectDifficulty::SceneSelectDifficulty()
{
	m_message = "SceneSelectDifficulty";
}

int SceneSelectDifficulty::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_GAME_EASY);
	}

	return 0;
}