#pragma once
#include "keyboard_input.h"
#include <SDL.h>
#include <map>

class sdl_keyboard_input : public keyboard_input
{
public:
	bool is_key_pressed(const INPUT_KEY key) override;
private:
	std::map<INPUT_KEY, SDL_Scancode> m_keyboard_sdl_mapping{
		{INPUT_KEY::KEY_ESC, SDL_SCANCODE_ESCAPE},
		{INPUT_KEY::KEY_RET, SDL_SCANCODE_RETURN},
		{INPUT_KEY::KEY_LCTRL, SDL_SCANCODE_LCTRL},
		{INPUT_KEY::KEY_RCTRL, SDL_SCANCODE_RCTRL},
		{INPUT_KEY::KEY_LSHIFT, SDL_SCANCODE_LSHIFT},
		{INPUT_KEY::KEY_RSHIFT, SDL_SCANCODE_RSHIFT},
		{INPUT_KEY::KEY_LALT, SDL_SCANCODE_LALT},
		{INPUT_KEY::KEY_RALT, SDL_SCANCODE_RALT},
		{INPUT_KEY::KEY_TAB, SDL_SCANCODE_TAB},
		{INPUT_KEY::KEY_Q, SDL_SCANCODE_Q},
		{INPUT_KEY::KEY_W, SDL_SCANCODE_W},
		{INPUT_KEY::KEY_E, SDL_SCANCODE_E},
		{INPUT_KEY::KEY_R, SDL_SCANCODE_R},
		{INPUT_KEY::KEY_T, SDL_SCANCODE_T},
		{INPUT_KEY::KEY_Y, SDL_SCANCODE_Y},
		{INPUT_KEY::KEY_U, SDL_SCANCODE_U},
		{INPUT_KEY::KEY_I, SDL_SCANCODE_I},
		{INPUT_KEY::KEY_O, SDL_SCANCODE_O},
		{INPUT_KEY::KEY_P, SDL_SCANCODE_P},
		{INPUT_KEY::KEY_A, SDL_SCANCODE_A},
		{INPUT_KEY::KEY_S, SDL_SCANCODE_S},
		{INPUT_KEY::KEY_D, SDL_SCANCODE_D},
		{INPUT_KEY::KEY_F, SDL_SCANCODE_F},
		{INPUT_KEY::KEY_G, SDL_SCANCODE_G},
		{INPUT_KEY::KEY_H, SDL_SCANCODE_H},
		{INPUT_KEY::KEY_J, SDL_SCANCODE_J},
		{INPUT_KEY::KEY_K, SDL_SCANCODE_K},
		{INPUT_KEY::KEY_L, SDL_SCANCODE_L},
		{INPUT_KEY::KEY_Z, SDL_SCANCODE_Z},
		{INPUT_KEY::KEY_X, SDL_SCANCODE_X},
		{INPUT_KEY::KEY_C, SDL_SCANCODE_C},
		{INPUT_KEY::KEY_V, SDL_SCANCODE_V},
		{INPUT_KEY::KEY_B, SDL_SCANCODE_B},
		{INPUT_KEY::KEY_N, SDL_SCANCODE_N},
		{INPUT_KEY::KEY_M, SDL_SCANCODE_M},
	};
};

