#include "DecoratorWall.h"

void DecoratorWall::render(const SDL_Rect& camera) const
{
	wall->render(camera);
}
