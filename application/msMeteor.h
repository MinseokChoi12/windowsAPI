#pragma once
#include "Common.h"
#include "msGameObject.h"

namespace ms
{
	class Meteor : public GameObject
	{
	public:
		Meteor();
		~Meteor();

		virtual void Tick() override;
		virtual void Render(HDC hdc) override;

	private:
		float mSpeed;
	};
}