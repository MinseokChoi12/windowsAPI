#include "msPlayer.h"
#include "msTime.h"
#include "msSceneManager.h"
#include "msInput.h"
#include "msMissile.h"
#include "msScene.h"
#include "msApplication.h"
#include "msMeteor.h"

namespace ms
{
	Player::Player()
		: mSpeed(1.0f)
	{
		SetPos({ 100.0f, 100.0f });
		SetScale({ 100.0f, 100.0f });
	}

	Player::~Player()
	{
	}
	void Player::Tick()
	{
		Vector2 pos = GetPos();
		int randTime = rand() % 200;
		if (randTime == 0)
		{
			Meteor* meteor = new Meteor();

			Scene* playScene = SceneManager::GetPlayScene();
			playScene->AddGameObject(meteor);

			Vector2 meteorPos = { (float)(rand() % 1720 + 100), (float)((-1) * rand() % 30) };
			meteor->SetPos(meteorPos);
		}

		if (KEY_PRESSED(eKeyCode::W))
		{
			pos.y -= 120.0f * Time::DeltaTime();
			InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);
		}
		if (KEY_PRESSED(eKeyCode::S))
		{
			pos.y += 120.0f * Time::DeltaTime();
			InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);
		}
		if (KEY_PRESSED(eKeyCode::A))
		{
			pos.x -= 120.0f * Time::DeltaTime();
			InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);
		}
		if (KEY_PRESSED(eKeyCode::D))
		{
			pos.x += 120.0f * Time::DeltaTime();
			InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);
		}

		if (KEY_DOWN(eKeyCode::SPACE))
		{
			Missile* missile = new Missile();

			Scene* playScene = SceneManager::GetPlayScene();
			playScene->AddGameObject(missile);

			Vector2 playerPos = GetPos();
			Vector2 playerScale = GetScale() / 2.0f;

			Vector2 missileScale = missile->GetScale();

			missile->SetPos((playerPos + playerScale) - (missileScale / 2.0f));
			InvalidateRect(Application::GetInstance().GetWindowData().hWnd, nullptr, true);
		}		

		SetPos(pos);
	}
	void Player::Render(HDC hdc)
	{
		Vector2 pos = GetPos();
		Vector2 scale = GetScale();
		Rectangle(hdc, pos.x, pos.y, pos.x + scale.x, pos.y + scale.y);		
	}
}