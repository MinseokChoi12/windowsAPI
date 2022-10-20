#include "msApplication.h"
#include "msSceneManager.h"


namespace ms
{	void Application::Initialize(WindowData data)
	{
		mWindowData = data;
		mWindowData.hdc = GetDC(data.hWnd);

		SceneManager::Initialize();
	}

	void Application::Tick()
	{
		SceneManager::Tick();
		SceneManager::Render(mWindowData.hdc);
	}

	Application::Application()
	{
		mWindowData.clear();
	}

	Application::~Application()
	{
		SceneManager::Release();

		ReleaseDC(mWindowData.hWnd, mWindowData.hdc);
	}
}


