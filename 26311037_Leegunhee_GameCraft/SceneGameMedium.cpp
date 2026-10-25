#include "SceneGameMedium.h"
#include "GameInput.h"
#include "App.h"

SceneGameMedium::SceneGameMedium()
{
	m_message = "SceneGameHard";
}

int SceneGameMedium::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_GAME_HARD);
	}

	return 0;
}