#pragma once
#include "Weapon.h"

class ArcherWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	ArcherWeapon();

	virtual ~ArcherWeapon() = default;

	virtual float ArrowDamage() = 0;

	virtual void DisplayArcherWeapon();
};

