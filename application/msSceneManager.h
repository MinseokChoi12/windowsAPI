#pragma once
#include "Common.h"

namespace ms
{
	class Scene;
	class SceneManager
	{
	public:
		static void Initialize();
		static void Tick();
		static void Render(HDC hdc);
		static void Release();

		static Scene* GetPlayScene() { return mPlayScene; }

	private:
		static Scene* mScenes[(UINT)eSceneType::Max];
		static Scene* mPlayScene;
	};
}