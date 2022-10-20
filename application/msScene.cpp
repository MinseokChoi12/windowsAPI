#include "msScene.h"
#include "msGameObject.h"

namespace ms
{
	Scene::Scene()
	{
	}

	Scene::~Scene()
	{
		for (UINT i = 0; i < mObjects.size(); i++)
		{
			delete mObjects[i];
			mObjects[i] = nullptr;
		}
	}

	void Scene::Initialize()
	{
		for (UINT i = 0; i < mObjects.size(); i++)
		{
			mObjects[i]->Initialize();
		}
	}

	void Scene::Tick()
	{
		for (UINT i = 0; i < mObjects.size(); i++)
		{
			mObjects[i]->Tick();
		}
	}

	void Scene::Render(HDC hdc)
	{
		for (UINT i = 0; i < mObjects.size(); i++)
		{
			mObjects[i]->Render(hdc);
		}
	}

	void Scene::AddGameObject(GameObject* object)
	{
		if (object == nullptr)
			return;

		mObjects.push_back(object);
	}
}