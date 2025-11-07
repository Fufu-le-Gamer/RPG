#pragma once
#include "AssassinWeapon.h"

class Hidden_Blade_Aguilar : public AssassinWeapon{
public:
	Hidden_Blade_Aguilar();

	~Hidden_Blade_Aguilar();

	virtual float PhysicDamage() override;
};

