#include "GamePawn.h"

GamePawn::GamePawn():GameActor(), keyboardInput(KeyboardInput::Instance())
{

}

GamePawn::GamePawn(Texture* _textura, Tile* _tileActual):GameActor(_textura, _tileActual)
{
	keyboardInput = KeyboardInput::Instance();
}

GamePawn::GamePawn(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer, Tile* _tileActual); {
	keyboardInput = KeyboardInput::Instance();
}


GamePawn::~GamePawn()
{
}

void GamePawn::render()
{
	GameActor::render();
}

void GamePawn::render(SDL_Rect& _camera)
{
	GameActor::render(_camera);
}

void GamePawn::update()
{
	GameActor::update();
}

void GamePawn::update(const unsigned int _delta)
{
	GameActor::update(_delta);
}


void GamePawn::deleteGameObjet()
{
	GameActor::deleteGameObject();
}
