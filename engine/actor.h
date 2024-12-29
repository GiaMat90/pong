#pragma once

#include "renderer.h"

class actor {
public:
	actor() = default;
	virtual ~actor() = default;
private:
	renderer* m_renderer{ nullptr };
};

class rendererable : public actor {
public:
	rendererable(renderer* const r) : m_renderer(r) {}
	virtual void draw() = 0;
private:
	renderer* m_renderer{ nullptr };
};