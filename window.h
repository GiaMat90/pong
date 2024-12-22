#pragma once

#include <exception>
#include <string>
#include <iostream>

class window {
public:
	class window_exception : public std::exception {
		const char* waht() { return "window exception"; }
	};
	class initialize_exception : public window_exception {
		const char* what() { return "initialization exception"; }
	};
	class create_exception : public window_exception {
		const char* what() { return "create exception"; }
	};
	using width_t = unsigned;
	using height_t = unsigned;
	struct position {
		unsigned x{};
		unsigned y{};
	};
	window(std::string title, width_t w, height_t h) :
		m_title(title), m_width(w), m_height(h) {}
	virtual ~window() = default;	
protected:
	std::string m_title;
	unsigned m_width;
	unsigned m_height;
	position m_start_pos;
};
