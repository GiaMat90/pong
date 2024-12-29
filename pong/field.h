#pragma once

#include "game_object.h"

class field : public static_object
{
public: 
	field() : static_object() {};
	void draw() override final;
};

