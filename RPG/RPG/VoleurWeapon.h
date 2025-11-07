#pragma once
#include "Weapon.h"

class VoleurWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	VoleurWeapon();

	virtual ~VoleurWeapon() = default;

	virtual float PhysicDamage() = 0;

	virtual void DisplayVoleurWeapon();
};

