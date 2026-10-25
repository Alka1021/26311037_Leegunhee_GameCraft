#include "SceneGameHard.h"
#include "GameInput.h"
#include "App.h"

SceneGameHard::SceneGameHard()
{
	m_message = "SceneGameHard";
}

int SceneGameHard::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_RESULT);
	}

	return 0;
}