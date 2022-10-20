#pragma once
#include "Common.h"
#include "msEntity.h"

namespace ms
{
	class GameObject;
	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initialize();
		virtual void Tick();
		virtual void Render(HDC hdc);

		void AddGameObject(GameObject* object);

	private:
		vector<GameObject*> mObjects;
	};
}