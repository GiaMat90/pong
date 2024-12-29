#pragma once

#include "renderer.h"
#include "sdl_adaptor.h"
#include <SDL_render.h>
#include "sdl_window.h"

class sdl_renderer : public renderer, public sdl_adaptor<SDL_Renderer>
{
public:
	sdl_renderer(sdl_window * w);
	~sdl_renderer();
public: // overrided methods
	void render() override;
	void clear() override;
	void set_draw_color(const color&) override;
	void draw(geometry::rectangle&) override;
	void draw(font*) override;
};

