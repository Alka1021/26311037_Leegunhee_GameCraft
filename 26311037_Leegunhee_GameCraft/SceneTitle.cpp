#include "SceneTitle.h"
#include "GameInput.h"
#include "App.h"

SceneTitle::SceneTitle()
{
	m_message = "SceneTitle";
}

int SceneTitle::Update()
{
	auto keyEvent = GetGameInput()->GetKeyState(VK_RIGHT);
	if (keyEvent == EInput::EINPUT_DOWN)
	{
		// next window
		g_pApp->ChangeScene(GAME_PHASE::SCENE_SELECT_DIFFICULTY);
		printf("ddd");
	}

	return 0;
}