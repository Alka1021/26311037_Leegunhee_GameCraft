#include "App.h"
#include "GameInput.h"
#include "GameScene.h"
#include <new>

App::App()
{

}

App::~App()
{

}

int App::Init()
{
	// GetTime 초기화
	m_gameTime.Init();

	// Glc2d 초기화

	// Input 초기화
	m_pGameInput = new GameInput;
	if (0 > m_pGameInput->Init())
	{
		Destroy();
		return -1;
	}

	// 게임 씬 초기화
	m_pGameScene = new GameScene;
	if (0 > m_pGameScene->Init())
	{
		Destroy();
		return -2;
	}

	return 0;
}

void App::Destroy()
{
	if (m_pGameInput)
	{
		delete m_pGameInput; m_pGameInput = nullptr;
	}
	if (m_pGameScene)
	{
		delete m_pGameScene; m_pGameScene = nullptr;
	}
}

int App::Update()
{
	// GameTime 업데이트
	m_gameTime.Update();

	// Input 업데이트
	if (0 > m_pGameInput->Update())
	{
		return -1;
	}

	// 게임 ui 업데이트
	if (0 > m_pGameScene->Update())
	{
		return -1;
	}

	// 게임 오브젝트 업데이트

	return 0;
}

int App::Render()
{
	// GameScene 렌더링
	if (0 > m_pGameScene->Render())
	{
		return -1;
	}

	return 0;
}

int App::Run()
{
	while (true)
	{
		//게임 업데이트
		if (0 > this->Update())
		{
			hr = -1;
			break;
		}

		// 게임 렌더링
		if (0 > this->Render())
		{
			hr = -2;
			break;
		}
	}
}