#pragma once
#include "msGameObject.h"

namespace ms
{
	class Missile : public GameObject
	{
	public:
		Missile();
		~Missile();

		virtual void Tick() override;
		virtual void Render(HDC hdc) override;

	private:
		float mSpeed;
	};
}


