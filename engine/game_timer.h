#pragma once

class game_timer {
public:
	game_timer(const unsigned fps) : m_fps(fps) {};
	virtual const float tick() = 0;
protected:
	unsigned m_fps{};

};