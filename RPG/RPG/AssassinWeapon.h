#pragma once
#include "Weapon.h"
class AssassinWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	AssassinWeapon();

	virtual ~AssassinWeapon() = default;

	virtual float PhysicDamage() = 0;

	virtual void DisplayAssassinWeapon();
};

