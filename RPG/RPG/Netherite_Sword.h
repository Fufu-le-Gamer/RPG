#pragma once
#include "Weapon.h";

class Netherite_Sword : public SmasherWeapon{
public:
	Netherite_Sword();

	~Netherite_Sword();
	
	virtual float MeleeDamage() override;
};

