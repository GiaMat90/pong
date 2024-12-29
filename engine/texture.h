#pragma once

#include "geometry.h"

using geometry::surface;

class texture {
public:
	texture() = default;
	virtual ~texture() {};
	explicit texture(surface*) {};
private:
	int m_width{};
	int m_height{};
};