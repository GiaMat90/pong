#pragma once

#include "sdl_adaptor.h"
#include "texture.h"
#include "SDL.h"



class sdl_texture : public texture, public sdl_adaptor<SDL_Texture>
{
public:
	sdl_texture();
	sdl_texture(SDL_Texture*);
	explicit sdl_texture(surface*);
	SDL_Texture* const get() { return m_sdl_texture; }
private:
	SDL_Texture* m_sdl_texture{ nullptr };
};

