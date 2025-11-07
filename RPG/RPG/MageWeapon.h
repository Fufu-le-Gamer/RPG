#pragma once
#include "Weapon.h"

class MageWeapon : public SmasherWeapon{
protected:
	std::string WeaponName;

public:
	MageWeapon();

	virtual ~MageWeapon() = default;

	virtual float MagicDamage() = 0;

	virtual void DisplayMageWeapon();

};

