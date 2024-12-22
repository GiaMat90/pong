#pragma once

#include <exception>
#include "window.h"
#include "geometry.h"

class renderer {
public:
	class color {
	public:
		friend renderer;
		color(unsigned r, unsigned g, unsigned b, unsigned a) :
			red(r), green(g), blue(b), alpha(a) {};
		inline unsigned get_red()	const { return red; }
		inline unsigned get_green()	const { return green; }
		inline unsigned get_blue()	const { return blue; }
		inline unsigned get_alpha()	const { return alpha; }
	private:
		unsigned red{};
		unsigned green{};
		unsigned blue{};
		unsigned alpha{};
	};
public:
	class creation_exception : public std::exception {
		const char* what() { return "renderer creation exception"; }
	};
	renderer(window * w) : m_window(w) {};
	virtual ~renderer() = default;
	virtual void render() = 0;
	virtual void clear() = 0;
	virtual void set_draw_color(const color&) = 0;
	virtual void draw_rectangle(geometry::rectangle&) = 0;
	//virtual	shape* create_shape(const SHAPE_TYPE& t) = 0;
protected:
	window* m_window{ nullptr };
};
