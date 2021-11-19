#pragma once
#include "../Entities/GameObject.h"
#include "../GameAITypes.h"
#include "../GameTextures.h"

class Factory
{
public:
	virtual std::shared_ptr<GameObject> CreatePlayer() = 0;
	//virtual GameObject* CreateEnemy() = 0;
	virtual std::shared_ptr<GameObject> CreateEnemy(Texture texture, AIType type, const int positionX, const int positionY, const int scaledTileSize) = 0;
};

