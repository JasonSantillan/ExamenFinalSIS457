#pragma once
#include "../Entities/Player.h"
#include "../Entities/Enemy.h"


class Builder
{

public:
	virtual Player* getPlayer() = 0;
	virtual Enemy* getEnemy() = 0;
	virtual vector<Enemy*> getEnemies() = 0;
};

