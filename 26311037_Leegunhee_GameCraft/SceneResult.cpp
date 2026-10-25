#include "SceneResult.h"
#include "GameInput.h"
#include "App.h"

SceneResult::SceneResult()
{
	m_message = "SceneResult";
}

int SceneResult::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_TITLE);
	}

	return 0;
}