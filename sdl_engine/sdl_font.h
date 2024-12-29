#pragma once

#include "font.h"
#include "sdl_adaptor.h"
#include "sdl_surface.h"
#include <string>
#include <SDL_ttf.h>

class sdl_font : public font, public sdl_adaptor<TTF_Font> {
public:
	sdl_font();
	sdl_font(const std::string& file_name, const color& c, const text_position& p, const std::size_t dim);
	~sdl_font();
	void load_font(const std::string& file_name, const std::size_t dim) override;
};