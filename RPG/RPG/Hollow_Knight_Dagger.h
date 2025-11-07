#pragma once
#include "VoleurWeapon.h"

class Hollow_Knight_Dagger : public VoleurWeapon{
public:
	Hollow_Knight_Dagger();

	~Hollow_Knight_Dagger();

	virtual float PhysicDamage() override;
};

