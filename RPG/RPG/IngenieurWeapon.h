#pragma once
#include "Weapon.h"

class IngenieurWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	IngenieurWeapon();

	virtual ~IngenieurWeapon() = default;

	virtual float TechnoDamage() = 0;

	virtual void DisplayIngenigneurWeapon();
};

