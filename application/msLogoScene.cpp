#include "msLogoScene.h"
#include "msPlayer.h"

namespace ms
{
	LogoScene::LogoScene()
	{
	}

	LogoScene::~LogoScene()
	{
	}

	void LogoScene::Initialize()
	{
		AddGameObject(new Player());
	}

	void LogoScene::Tick()
	{
		Scene::Tick();
	}

	void LogoScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}