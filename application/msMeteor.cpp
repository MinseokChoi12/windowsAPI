#include "msMeteor.h"
#include "msTime.h"
#include "msApplication.h"

namespace ms
{
	Meteor::Meteor()
		: mSpeed(1.0f)
	{
		SetPos({ 100.0f, 100.0f });
		SetScale({ 20.0f, 50.0f });
	}

	Meteor::~Meteor()
	{
	}

	void Meteor::Tick()
	{
		Vector2 pos = GetPos();

		pos.y += 100.0f * Time::DeltaTime();
		InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);

		SetPos(pos);
	}

	void Meteor::Render(HDC hdc)
	{
		Vector2 pos = GetPos();
		Vector2 scale = GetScale();
		Ellipse(hdc, pos.x, pos.y, pos.x + scale.x, pos.y + scale.y);
	}
}