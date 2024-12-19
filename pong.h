#pragma once

#include "game.h"

class pong: public game
{
public:
	pong() : game() {};
	bool initialize() override;
	void run_game() override;
	void shutdown() override;
private:
	void process_input() override;
	void update_game() override;
	void generate_output() override;
};

