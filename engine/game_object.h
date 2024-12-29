#pragma once

class game_object {
public:
	game_object() = default;
	virtual ~game_object() = default;
};

class drawable : public game_object {
public:
	virtual void draw() = 0;
};

class updateable : public game_object {
public:
	virtual void update(const float delta_time) = 0;
};

class static_object : public drawable {
public:
	static_object() = default;
	~static_object() = default;
};

class dynamic_object : public updateable, public drawable {
public:
	dynamic_object() = default;
	~dynamic_object() = default;
};

class trigger_object : public updateable {
	trigger_object() = default;
	~trigger_object() = default;
};