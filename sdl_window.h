#pragma once

#include "window.h"
#include <SDL3/SDL_video.h>

class sdl_renderer;

class sdl_window : public window {
	friend sdl_renderer;
public:
	sdl_window(const std::string& s, width_t w, height_t h);
private:
	SDL_Window* m_sdl_window{ nullptr };
};

