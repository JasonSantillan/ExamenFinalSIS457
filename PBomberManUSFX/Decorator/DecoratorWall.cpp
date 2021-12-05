#include "DecoratorWall.h"

void DecoratorWall::render(const SDL_Rect& camera)
{
	wall->render(camera);
}
