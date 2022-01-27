#pragma once
#include "Decorator/DecoratorWall.h"
class SuperBallDecoratorWall :
    public DecoratorWall
{
public:
    SuperBallDecoratorWall(std::shared_ptr<SDL_Texture> texture, SDL_Renderer* renderer, GameActor* _wall) :DecoratorWall(texture, renderer, _wall) {};
    void render(const SDL_Rect& _camera);
};

