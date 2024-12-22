#pragma once

#include "renderer.h"
#include <SDL_render.h>
#include "sdl_window.h"

class sdl_renderer : public renderer
{
public:
	sdl_renderer(sdl_window * w);
	~sdl_renderer();
public: // overrided methods
	void render() override;
	void clear() override;
	void set_draw_color(const color&) override;
	void draw_rectangle(geometry::rectangle&) override;
	//shape* create_shape(const SHAPE_TYPE&) override;
protected:
	SDL_Renderer* m_sdl_renderer;
};

