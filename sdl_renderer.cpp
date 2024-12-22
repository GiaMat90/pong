#include "sdl_renderer.h"

sdl_renderer::sdl_renderer(sdl_window * w) : renderer(w) {
	//// Create SDL renderer
	m_sdl_renderer = SDL_CreateRenderer(w->m_sdl_window, NULL);

	if (!m_sdl_renderer)
	{
		throw creation_exception();
	}
}

sdl_renderer::~sdl_renderer() {
	SDL_DestroyRenderer(m_sdl_renderer);
}

// overrided methods

void sdl_renderer::render() {
	SDL_RenderPresent(m_sdl_renderer);
}

void sdl_renderer::clear() {
	SDL_RenderClear(m_sdl_renderer);
}

void sdl_renderer::set_draw_color(const renderer::color& c)
{
	
	if (!SDL_SetRenderDrawColor(m_sdl_renderer, c.get_red(), c.get_green(), c.get_blue(), c.get_alpha())) {
		throw std::exception();
	}
}

void sdl_renderer::draw_rectangle(geometry::rectangle& r) {
	SDL_FRect tmp{ r.get_x(), r.get_y(), r.get_w(), r.get_h() };
	if (!SDL_RenderFillRect(m_sdl_renderer, &tmp)) {
		throw std::exception();
	}
}
