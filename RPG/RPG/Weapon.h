#pragma once
#include <iostream>
#include <string>

class SmasherWeapon
{
protected:
	std::string WeaponName;

public:
	SmasherWeapon();

	~SmasherWeapon();

	virtual float MeleeDamage() = 0;

	virtual float MagicDamage() = 0;
	
	virtual float ArrowDamage() = 0;
	
	virtual float TechnoDamage() = 0;

	virtual void DisplayWeapon();
};

