#pragma once
#include "../Entities/GameActor.h"
#include "../Adapters/WallPacman.h"
#include "../Adapters/Tile.h"

class WallPacmanAdapter :
    public GameActor, public WallPacman
{

public:
    WallPacmanAdapter(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, Tile* _tile);
    virtual void update(const unsigned int delta) override;
    
};

