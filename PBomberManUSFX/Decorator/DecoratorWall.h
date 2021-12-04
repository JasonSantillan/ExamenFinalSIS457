#pragma once
#include "../Entities/Wall.h"
class DecoratorWall :
    public Wall
{
private:
    Wall* wall;
public:
    DecoratorWall(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, Wall* _wall):Wall(texture, renderer) {
        wall = _wall;
    }
    
    void render(const SDL_Rect& camera) const;
    
};

