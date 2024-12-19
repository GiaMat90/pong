#pragma once

#include "game.h"

class pong: public game
{
	template<std::size_t Dim>
	class vector {
	public:
		vector(unsigned x = 0u, unsigned y = 0u){
			m_v[0] = x;
			m_v[1] = y;
		}
		inline unsigned get_x() { return m_v[0]; }
		inline unsigned get_y() { return m_v[0]; }
	private:
		unsigned m_v[Dim];
	};
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
	using pong_vector = vector<2u>;
	pong_vector m_paddle_pos{10u, 768u / 2u};
	pong_vector m_ball_pos{1024u / 2u, 768u / 2u};
	pong_vector m_ball_vel{-200u, 235u};

};

