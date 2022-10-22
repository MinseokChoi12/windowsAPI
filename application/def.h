#pragma once

#define KEY_PRESSED(KEY) ms::Input::GetKeyState(KEY) == ms::eKeyState::PRESSED
#define KEY_DOWN(KEY) ms::Input::GetKeyState(KEY) == ms::eKeyState::DOWN
#define KEY_UP(KEY) ms::Input::GetKeyState(KEY) == ms::eKeyState::UP

enum class eSceneType
{
	Logo, 
	Title,
	Play,
	End,
	Max,
};