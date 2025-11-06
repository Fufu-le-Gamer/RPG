#pragma once
#include "Weapon.h"

class Excalibure : public SmasherWeapon{
public:
	Excalibure();

	~Excalibure();

	virtual float MeleeDamage() override;
};

