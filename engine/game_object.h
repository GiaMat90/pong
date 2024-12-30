#pragma once

#include "texture.h"
#include "renderer.h"

class game_object {
public:
	game_object() = default;
	virtual ~game_object() = default;
};

class drawable : public game_object {
public:
	drawable() = default;
	virtual ~drawable() = default;
	inline void draw() {
		if (m_renderer && m_texture) {
			m_renderer->draw(m_texture);
		}
	};
public:
	inline void set_renderer(renderer* r) { m_renderer = r; }
	inline void set_texture(texture* r) { m_texture = r; }
protected:
	texture* m_texture{ nullptr };
	renderer* m_renderer{ nullptr };
};

class updateable : public game_object {
public:
	updateable() = default;
	virtual ~updateable() = default;
	virtual void update(const float delta_time) = 0;
};

class static_object : public drawable {
public:
	static_object() = default;
	virtual ~static_object() = default;
};

class dynamic_object : public updateable, public drawable {
public:
	dynamic_object() = default;
	virtual ~dynamic_object() = default;
};

class trigger_object : public updateable {
	trigger_object() = default;
	virtual ~trigger_object() = default;
};