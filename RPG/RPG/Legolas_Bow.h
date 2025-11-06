#pragma once
#include "Weapon.h"
class Legolas_Bow : public SmasherWeapon{
public:
	Legolas_Bow();

	~Legolas_Bow();

	virtual float ArrowDamage() override;
};

