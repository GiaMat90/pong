#include <game.h>

#ifdef USE_SDL

#include "sdl_window.h"
#include "sdl_renderer.h"
#include "sdl_keyboard_input.h"
#include "sdl_game_timer.h"

#include <SDL_ttf.h>

bool game::initialize_externals() {
	// Initialize SDL
	bool res{ true };
	if (!(res = SDL_Init(SDL_INIT_VIDEO))) {
		tsg::print("Error initializing SDL");
	}
	if (!(res &= TTF_Init())) {
		tsg::print("Error initializing SDL_TTF");
	}

	return res;
}

void game::create_window(std::string title, window::width_t w, window::height_t h) {
	m_window = new sdl_window(title, w, h);
}

void game::create_renderer() {
	m_renderer = new sdl_renderer(static_cast<sdl_window*>(m_window));
}

void game::create_keyboard_input() {
	m_input = new sdl_keyboard_input();
}

void game::create_timer(const unsigned fps) {
	m_timer = new sdl_game_timer(fps);
}

void game::quit() {
	SDL_Quit();
	TTF_Quit();
}
#endif