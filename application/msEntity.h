#pragma once
#include "Common.h"

namespace ms
{
	class Entity
	{
	public:
		Entity();
		virtual ~Entity();

		void SetName(const wstring name) { mName = name; }
		wstring GetName() { return mName; }

	private:
		wstring mName;
		UINT mID;
	};
}


