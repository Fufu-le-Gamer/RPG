#pragma once
#include "WarriorWeapon.h"

class Excalibure : public WarriorWeapon{
public:
	Excalibure();

	~Excalibure();

	virtual float PhysicDamage() override;
};

