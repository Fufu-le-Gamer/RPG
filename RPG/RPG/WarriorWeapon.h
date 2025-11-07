#pragma once
#include "Weapon.h"

class WarriorWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	WarriorWeapon();

	virtual ~WarriorWeapon() = default;

	virtual float PhysicDamage() = 0;

	virtual void DisplayWarriorWeapon();
};

