#pragma once
#include "Common.h"

namespace ms
{
	class Application
	{
	public:
		static Application& GetInstance()
		{
			static Application mInstance;
			return mInstance;
		}		

		void Initialize(WindowData data);
		void Tick();

	private:
		Application();
		~Application();
		
	private:		
		WindowData mWindowData;
	};
}


