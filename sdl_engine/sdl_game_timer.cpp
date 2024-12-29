#include "sdl_game_timer.h"
#include <SDL_timer.h>

const float sdl_game_timer::tick() {
	static unsigned m_ticks_elapsed = static_cast<unsigned>(SDL_GetTicks()); // ms since the library started
	const unsigned tick_msec{ 1000u / m_fps }; // minimum time unit in ms
	while ((m_ticks_elapsed + tick_msec - SDL_GetTicks()) > 0u) {}
	// time elapsed
	float delta_time = (SDL_GetTicks() - m_ticks_elapsed) / 1000.0f;
	// store time for next tick
	m_ticks_elapsed = static_cast<unsigned>(SDL_GetTicks()); 
	// upper limit the time
	const float threshold_sec{ 1.0f / m_fps }; 
	return delta_time > threshold_sec ? threshold_sec : delta_time;
}