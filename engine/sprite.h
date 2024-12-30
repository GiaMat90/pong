#pragma once

#include "texture.h"
#include <string>

class sprite : public texture {
public:
	sprite() = default;
	virtual ~sprite() = default;
	sprite(const std::string& path) : m_file_path(path) {};
	inline std::string get_file() { return m_file_path; }
protected:
	std::string m_file_path{};

};
