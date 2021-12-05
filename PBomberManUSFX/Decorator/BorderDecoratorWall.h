#pragma once
#include "DecoratorWall.h"
class BorderDecoratorWall :
    public DecoratorWall
{
public:
    BorderDecoratorWall(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, Wall* _wall) :DecoratorWall(texture, renderer, _wall) {};
    void render(const SDL_Rect& camera);
};

