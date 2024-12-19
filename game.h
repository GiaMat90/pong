#pragma once

#include "window.h"
#include "renderer.h"
#include <types.h>

class game : public tsg::non_copyable
{
public:
	enum class GAME_STATE {
		NONE,
		INITIALIZING,
		RUNNING,
		STOPPING
	};
	game();
	~game();
	virtual bool initialize() = 0;
	virtual void run_game() = 0;
	virtual void shutdown() = 0;
protected: // virtual methods
	virtual void process_input() = 0;
	virtual void update_game() = 0;
	virtual void generate_output() = 0;
protected:
	void create_window(std::string title, window::width_t w, window::height_t h);
	void create_renderer();
protected: // attributes
	GAME_STATE m_state{ GAME_STATE::NONE };
	window* m_window{nullptr};
	renderer* m_renderer{nullptr};

};

