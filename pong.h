#pragma once

#include "game.h"
#include "geometry.h"
#include <chrono>

class pong: public game
{
public:

	using pong_vector = geometry::vector<2u>;

public:
	pong() : game() {};
	bool initialize() override;
	void run_game() override;
	void shutdown() override;
private:
	void process_input() override;
	void update_game() override;
	void generate_output() override;
private:
	pong_vector m_paddle_pos{10.0f, 768.0f / 2.0f };
	pong_vector m_ball_pos{1024.0f / 2.0f, 768.0f / 2.0f };
	pong_vector m_ball_vel{-200.0f, 235.0f};
	int m_paddle_dir{};
	const std::chrono::milliseconds m_spf{ 1000u / 60u };  // millisecond per frame if fsp is 60
};

