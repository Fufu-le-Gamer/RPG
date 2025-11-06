#pragma once
#include "Weapon.h"

class Elder_Wand : public SmasherWeapon{
public:
	Elder_Wand();

	~Elder_Wand();

	virtual float MagicDamage() override;
};

