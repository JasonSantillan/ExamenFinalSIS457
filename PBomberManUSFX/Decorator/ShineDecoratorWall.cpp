#include "ShineDecoratorWall.h"

void ShineDecoratorWall::render(const SDL_Rect& camera) const
{
	DecoratorWall::render(camera);
	std::cout << "dentro de ShineDecoratorWall" << std::endl;
}