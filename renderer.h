#pragma once

#include <exception>
#include "window.h"

class renderer {
public:
	class creation_exception : public std::exception {
		const char* what() { return "renderer creation exception"; }
	};
	renderer(window * w) : m_window(w) {};
protected:
	window* m_window{ nullptr };
};
