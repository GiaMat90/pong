#include "game.h"

#ifdef USE_SDL

#include "sdl_window.h"
#include "sdl_renderer.h"
#include "sdl_keyboard_input.h"

void game::create_window(std::string title, window::width_t w, window::height_t h) {
	m_window = new sdl_window(title, w, h);
}

void game::create_renderer() {
	m_renderer = new sdl_renderer(static_cast<sdl_window*>(m_window));
}

void game::create_keyboard_input() {
	m_input = new sdl_keyboard_input();
}

void game::quit() {
	SDL_Quit();
}
#endif

game::game() {}

game::~game() {
	delete m_renderer;
	delete m_window;
	delete m_input;
	quit();
}


