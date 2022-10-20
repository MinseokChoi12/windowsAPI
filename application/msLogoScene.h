#pragma once
#include "msScene.h"

namespace ms
{
	class LogoScene : public Scene
	{
	public:
		LogoScene();
		~LogoScene();

		void Initialize() override;
		void Tick() override;
		void Render(HDC hdc) override;

	private:

	};
}