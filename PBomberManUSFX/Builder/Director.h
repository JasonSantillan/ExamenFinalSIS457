#pragma once
#include "../Builder/Builder.h"
#include "../Scenes/LevelScene.h"

class Director
{
private:
	Builder* builder;

public:
	void setBuilder(Builder* _newBuilder)
	{
		builder = _newBuilder;
	}

	LevelScene* getLevelScene()
	{
		/*Auto* Coche = new Auto();

		Coche->Carroceria = builder->getCarroceria();
		Coche->Motor = builder->getMotor();
		Coche->Neumaticos[0] = builder->getNeumatico();
		Coche->Neumaticos[1] = builder->getNeumatico();
		Coche->Neumaticos[2] = builder->getNeumatico();
		Coche->Neumaticos[3] = builder->getNeumatico();

		return Coche;*/
		return nullptr;
	}
};

