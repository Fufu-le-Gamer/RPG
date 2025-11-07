#pragma once
#include "WarriorWeapon.h"

class Netherite_Sword : public WarriorWeapon{
public:
	Netherite_Sword();

	~Netherite_Sword();
	
	virtual float PhysicDamage() override;
};

