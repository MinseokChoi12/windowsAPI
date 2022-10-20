#pragma once
#include "msGameObject.h"

namespace ms
{
	class Player : public GameObject
	{
	public:
		Player();
		~Player();

		virtual void Tick() override;
		virtual void Render(HDC hdc) override;

	private:
		float mSpeed;
	};
}


