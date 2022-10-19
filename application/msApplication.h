#pragma once
#include "Common.h"

namespace ms
{
	class Application
	{
	public:
		static Application& GetInstance()
		{
			return mInstance;
		}

		Application();
		~Application();

		void Initialize(WindowData data);
		void Tick();
		
	private:
		static Application mInstance;
		WindowData mWindowData;
	};
}


