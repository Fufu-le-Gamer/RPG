#pragma once
#include "Weapon.h"

class Hawkeye_Bow : public SmasherWeapon{
public:
	Hawkeye_Bow();

	~Hawkeye_Bow();

	virtual float ArrowDamage() override;
};

