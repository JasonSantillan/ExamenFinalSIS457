#pragma once
#include "Player.h"
class ClasicoPlayer :
    public Player
{
public:
    ClasicoPlayer(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);
};

