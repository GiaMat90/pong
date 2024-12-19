#pragma once

#include "renderer.h"
#include <SDL_render.h>
#include "sdl_window.h"

class sdl_renderer : public renderer
{
public:
	sdl_renderer(sdl_window * w);
protected:
	SDL_Renderer* m_sdl_renderer;
};

