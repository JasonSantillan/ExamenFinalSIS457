#include "WallAdapter.h"
#include "../Const.h"

WallAdapter::WallAdapter(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer)
    : GameActor(_texture, _renderer), Wall(nullptr, nullptr)
{
    // movement animation
    movement = std::make_shared<Animation>();
    movement->addAnimationEntity(AnimationEntity(0, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 1, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 2, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 3, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 4, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 5, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 6, 0, tileSize, tileSize));
    movement->addAnimationEntity(AnimationEntity(tileSize * 7, 0, tileSize, tileSize));
    movement->setSprite(this);
    addAnimation(movement);
}

void WallAdapter::update(const unsigned int delta)
{
    GameActor::update(delta);
}
