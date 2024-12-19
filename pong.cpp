#include "pong.h"

bool pong::initialize() { 
	create_window("pong.exe", 1024, 768);
	create_renderer();
	return true; 
};

void pong::run_game() {
	while (GAME_STATE::RUNNING == m_state) {
		process_input();
		update_game();
		generate_output();
	}
};

void pong::shutdown() {};

void pong::process_input() {};

void pong::update_game() {
	while (true) {};
};

void pong::generate_output() {};


