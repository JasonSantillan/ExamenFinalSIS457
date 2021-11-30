#pragma once
#include "../Entities/GameActor.h"
#include "../Adapters/Wall.h"
class WallAdapter :
    public GameActor, public Wall
{

public:
    WallAdapter(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer);
    virtual void update(const unsigned int delta) override;
private:
    std::shared_ptr<Animation> movement; // movement animation
};

