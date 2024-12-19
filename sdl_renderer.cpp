#include "sdl_renderer.h"

sdl_renderer::sdl_renderer(sdl_window * w) : renderer(w) {
	//// Create SDL renderer
	m_sdl_renderer = SDL_CreateRenderer(w->m_sdl_window, NULL);

	if (!m_sdl_renderer)
	{
		throw creation_exception();
	}
}
