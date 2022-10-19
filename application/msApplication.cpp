#include "msApplication.h"

namespace ms
{
	Application Application::mInstance;

	Application::Application()
	{
		mWindowData.clear();
	}

	Application::~Application()
	{
		ReleaseDC(mWindowData.hWnd, mWindowData.hdc);
	}

	void Application::Initialize(WindowData data)
	{
		mWindowData = data;
		mWindowData.hdc = GetDC(data.hWnd);
	}

	void Application::Tick()
	{
	}
}


