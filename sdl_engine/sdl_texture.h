#pragma once

#include "sdl_adaptor.h"
#include "texture.h"
#include "asset.h"
#include "SDL.h"

class sdl_texture : public texture, public sdl_adaptor<SDL_Texture>
{
public:
	sdl_texture() = default ;
	explicit sdl_texture(SDL_Texture*);
	virtual ~sdl_texture();
};

