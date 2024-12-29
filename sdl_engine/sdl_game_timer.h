#pragma once
#include "game_timer.h"

class sdl_game_timer : public game_timer
{
public:
	sdl_game_timer(const unsigned fps) : game_timer(fps) {}
	const float tick() override;
};

